#include <stdio.h>
#include <sys/types.h>
#include <signal.h>
#include <errno.h>
#include <stdlib.h>
#include "alloc-inl.h"
#include "debug.h"
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

FILE* snapshot_logfile;
int snapshot_logfile_fd;

void setup_snapshot_dir() {

  //write to log file
  u8* fn = alloc_printf("snapshot_dir/kill_process_log.txt");

  snapshot_logfile_fd = open(fn, O_WRONLY | O_CREAT | O_TRUNC , 0600);
  ck_free(fn);

  if (snapshot_logfile_fd < 0) FATAL("open snapshot_dir/kill_process_log.txt error");

  snapshot_logfile = fdopen(snapshot_logfile_fd, "w");

  if (!snapshot_logfile) {
    close(snapshot_logfile_fd);
    FATAL("fdopen snapshot_dir/kill_process_log.txt error");
  }


}

int main(int argc, char const *argv[])
{
	setup_snapshot_dir();
    //give the server a bit more time to gracefully terminate
	fprintf(snapshot_logfile, "ready to in\n");
	fprintf(snapshot_logfile, "kill_pid:%s\n", argv[1]);
	fflush(snapshot_logfile);
  	int i = 0;
  	int k = 0;
	while(1) {

	  int p_status = kill(atoi(argv[1]), 0);
	  // ACTF("status:%d ++ %d", status, (errno == ESRCH));
	  i++;
	  if (i > k * 20000000) {
	  	k++;
	  	fprintf(snapshot_logfile, "p_status:%d, errno:%d\n", p_status, errno);
		}
	  if ((p_status != 0) && (errno == ESRCH)) break;
	}
	fprintf(snapshot_logfile, "done\n");
	fclose(snapshot_logfile);
	return 0;
}