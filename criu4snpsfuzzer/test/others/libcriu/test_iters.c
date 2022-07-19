#include "criu.h"
#include <fcntl.h>
#include <stdio.h>
#include <errno.h>
#include <stdlib.h>
#include <signal.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <unistd.h>
#include "lib.h"

static int wdir_fd, cur_iter = 1, cur_imgdir = -1;

static int stop = 0;
static void sh(int sig)
{
	stop = 1;
}

static int open_imgdir(void)
{
	char p[10];

	sprintf(p, "%d", cur_iter);
	mkdirat(wdir_fd, p, 0700);
	cur_imgdir = openat(wdir_fd, p, O_DIRECTORY);
	criu_set_images_dir_fd(cur_imgdir);
}

#define MAX_ITERS	2

static int next_iter(criu_predump_info pi)
{
	char p[10];

	printf("   `- %d iter over\n", cur_iter);

	close(cur_imgdir);
	sprintf(p, "../%d", cur_iter);
	criu_set_parent_images(p);

	cur_iter++;
	open_imgdir();

	return cur_iter < MAX_ITERS;
}

#define SUCC_ECODE	42

int main(int argc, char **argv)
{

	int pid, ret;
	while(1) {
	wdir_fd = open(argv[1], O_DIRECTORY);
	if (wdir_fd < 0) {
		perror("Can't open wdir");
		return 1;
	}
	printf("--- Restore loop1111 ---\n");
	criu_init_opts();
	criu_set_shell_job(true);
	criu_set_log_level(4);
	criu_set_log_file("rst.log");
	criu_set_images_dir_fd(wdir_fd);

	pid = criu_restore_child();
	if (pid <= 0) {
		what_err_ret_mean(pid);
		return -1;
	}

	close(wdir_fd);
    int wait_fork = fork();
    if(!wait_fork) {
        if (1 && (pid > 0)) kill(pid, SIGTERM);

        //give the server a bit more time to gracefully terminate
        while(1) {
          int p_status = kill(pid, 0);
          // ACTF("send_pid:%d",send_pid);
          // ACTF("status:%d ++ %d", status, (errno == ESRCH));
          if ((p_status != 0) && (errno == ESRCH)) break;
        }
        exit(0);
    }
    int status = 0;
    //waitpid to do
    printf("\nready to waitpid");
    if (waitpid(pid, &status,0) <= 0) {
		printf("waitpid() failed");
		exit(1);
	}
    printf("\nwaitpid end");

  }
  	return chk_exit(ret, SUCC_ECODE);
}

