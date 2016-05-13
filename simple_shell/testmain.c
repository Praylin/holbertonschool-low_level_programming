#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
# define BUF_SIZE 128

int print_char(char c);
char *read_line(const int fd);
int strings_compare(char *s1, const char *s2);
void execute_command(char *command);
int main(int ac , char **argv, char **env)
{
  char *command;
  
  command = NULL;
  while(1)
    {
      print_char('$');
      command = read_line(0);
      execute_command(command);
    }
     free(command); 
  return (0);
}

int print_char(char c)
{
  return (write(1, &c, 1));
}

char *read_line(const int fd)
{                                                                                                                                         
  char *buffer;
  int rd;
  int bufsize;

    bufsize = BUF_SIZE;       
    buffer = malloc(bufsize * sizeof(char));                                                                                                             
    if(buffer == NULL)                                                                                                                                       {                                                                                                                                                    
      perror("Malloc");                                                                                                                                  
      return NULL;                                                                                                                                      
    }
    rd = read (fd, buffer, bufsize); 
    if(rd == -1)                                                                                                                                               return NULL;
    buffer[rd + 1] = '\0';
  return buffer;
}

int strings_compare(char *s1, const char *s2)
  {
    int i;
    i = 0;
    while((s1[i] != '\0') && (s1[i] == s2[i]))
      {
	i++;
      }
    if(s1[i] == s2[i])
      return 0;
    return (s1[i] - s2[i]);
  }

void execute_command(char *command)
{
  pid_t pid;
  char *path;
  char *exec_argv[3];
  int status;

  exec_argv[0] = "/bin/ls";
  exec_argv[1] = "-la";
  exec_argv[2] = NULL;
  path = command;
  /*  char *args[]     = { "ls", "-l", "-a", NULL };
  char *env_args[] = { "PATH=/bin", "USER=me", NULL }; */
  if((pid = fork()) == -1)
    {
      perror("Fork");
      /*return (1);*/
    }
  if(pid == 0)
    {
      printf("%s", command);
      execve(exec_argv[0], exec_argv, NULL);
      fprintf(stderr, "Oops!\n");
    }
  else
    {
      wait(&status);
      printf("Child terminated");
    }
}
