#include <stdio.h>
#include <sys/types.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include <stdlib.h>

#define MAX_SIZE 128
int fds,fde;
int criu_dump_monitor_pid;
char dir_name[MAX_SIZE];

void setup_pipe()
{
  //管道阻塞
  fds = open("/var/tmp/startpipe",O_RDONLY);
  // if(stop_soon) return 0;
  if(fds < 0) {
      perror("open startpipe fail\n");
      exit(EXIT_FAILURE);
  }
  fde = open("/var/tmp/endpipe",O_WRONLY);
  if(fde < 0) {
      perror("open endpipe fail\n");
      exit(EXIT_FAILURE);
  }
}

void split(char *buf)
{
  printf("split...\n");
  const char delima[2] = "-";
  char *token;
  token = strtok(buf, delima);
  criu_dump_monitor_pid = atoi(token);
  if(token != NULL) {
    printf("%s\n", token);
    token = strtok(NULL, delima);
  }
  memset(dir_name, '\0', sizeof(dir_name));
  if (strlen(token) > MAX_SIZE) {
    perror("recv dir_name is too large, please reset the MAX_SIZE");
    exit(1);
  }
  memcpy(dir_name, token, strlen(token));

}

void rece_message()
{
	printf("receive pid...\n");
	char buff[256];
  int rece_size;
  while (1) {
    rece_size = read(fds,buff,sizeof(buff)-1);
    if(rece_size > 0) {
      buff[rece_size] = 0;
      printf("client say:%s\n",buff);
      break;
    }
    else if(rece_size == 0) {
      continue;
    }
    else {
      perror("read error\n");
      exit(EXIT_FAILURE);
    } 
  }

  split(buff);
  
}

void send_message() 
{
  char endbuf[5] = "end";
  printf("send end message...\n");
  int Wflag = write(fde, endbuf, strlen(endbuf));
  if(Wflag < 0) {
    perror("write error!\n");
    exit(EXIT_FAILURE);    
  }
  else if (Wflag == strlen(endbuf)) {
    printf("success send %s by pipe\n", endbuf);
  }else {
    perror("Unable to write");
    exit(EXIT_FAILURE);
  }
}

void criu_dump () 
{
  printf("criu dump...\n");
  
  char temp[256];
  sprintf(temp, "criu dump --tree %d --images-dir %s -v4 -o dump.log --shell-job", criu_dump_monitor_pid , dir_name);
  printf("criu dump ins:%s\n", temp);
  FILE *fp;

  if((fp = popen(temp,"r")) == NULL){
    perror("error execute criu dump");
    exit(EXIT_FAILURE);
  }
  else{
    pclose(fp);
  }
  printf("criu end...\n");
}

int main(int argc, char const *argv[])
{
  setup_pipe();
  while(1) {
    rece_message();
    criu_dump();
    send_message();
  }
  return 0;
}