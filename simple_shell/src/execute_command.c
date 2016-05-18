#include <sys/types.h>
#include <dirent.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

/*Execute the command. Command and the options are given as arguments.*/
int execute_command(char *command, char *split_command)
{
  pid_t pid;
  char *exec_argv[3];
  int status;

  exec_argv[0] = command;
  exec_argv[1] = split_command;
  exec_argv[2] = NULL;
  /*Create a child process*/
  if((pid = fork()) == -1) {
    perror("Fork");
    return (-1);
  }
  /*Child process*/
  if(pid == 0) {
    execve(exec_argv[0], exec_argv, NULL);
    return (-1);
  }
  /*Parent process*/
  else {
    wait(&status);
  }
  return status;
}
