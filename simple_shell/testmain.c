#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <dirent.h>
#include <sys/wait.h>
#include "libshell/libshell.h"
# define BUF_SIZE 8

int print_char(char c);
char *read_line(const int fd);
int execute_command(char *command, char *split_command);
char *extract_path(char **env);
int strings_n_compare(char *s1, const char *s, size_t n);
char **string_split(const char *str, char separator);
int validate_command(const char *whole_path);
char *concat_strings(char *dest, const char *src);
int strings_compare(char *s1, const char *s2);
int main(__attribute__((unused)) int ac , __attribute__((unused)) char **argv, char **env)
{
  char *command;
  char *path;
  char **path_array;
  char **separate_path;
  char *slash_command;
  char slash[20] = "/";
  int i = 0;
  char *whole_path;
  int validation;
  char **split_command;
  int status;
  char *valid_command;
  
  status = 0;
  validation = 0;
  while(1)
    {
      print_char('$');
      command = NULL;
      command = read_line(0);
      /*printf("%s", command);*/
      if(strings_compare(command, "env") == 0)
	{
	  for(i = 0; env[i] != '\0'; i++)
	    printf("%s\n", env[i]);
	  free(command);
	}
      else if(strings_n_compare(command, "exit", 4) == 0)
	{
	  free(command);
	  exit(0);
	}
      else if(strings_compare(command, "echo $?") == 0)
	printf("%d\n", status);
      else
	{
	  split_command = string_split(command, ' ');
	  /* for(i = 0; split_command[i] != '\0'; i++)
	     printf("Splitted commands= %s\n", split_command[i]);
	   printf("Command = %s\n", command);*/
	  path = extract_path(env);
	  /* printf("$PATH = %s\n", path);*/
	  path_array = string_split(path, '=');
	  /* printf("PATH_ARRAY = %s\n", path_array[1]);*/
	  separate_path = string_split(path_array[1], ':');
	  /* for(i = 0; separate_path[i] != '\0'; i++)
	 printf("SEPARATE PATHS = %s\n", separate_path[i]);*/
	  slash_command = concat_strings(slash, split_command[0]);
	  /* printf("SLASH_COMMAND = %s\n", slash_command);*/
	  for(i = 0; separate_path[i] != '\0'; i++)
	    {
	      whole_path = concat_strings(separate_path[i], slash_command);
	      /* printf("WHOLE_PATH = %lu\n", strlen(whole_path));*/
	      validation = validate_command(whole_path);
	      /* printf("validation = %d\n", validation);*/
	       if(validation == 0)
		{
		  /* status =  execute_command(whole_path, split_command[1]);*/
		  valid_command = whole_path;
		  break;
		}
	       /* else
		  valid_command = NULL;*/
	   }
	  if(validation != 0)
	  /* if(valid_command == NULL)*/
	    { 
	      printf("%s: Command not found", command);
	    }
	  status = execute_command(valid_command, split_command[1]);
	  free(command);
	  free(split_command);
	}
      /* if(validation != 0)
	 printf("%s: Command not found", command);*/
    }
  free(command);
  return (0);
}

/*For printing character*/
int print_char(char c)
{
  return (write(1, &c, 1));
}

/*For reading a line from stdin*/
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
    buffer[rd-1] = '\0'; /*To remove the new line from the buffer*/
    /* printf("buffer = %s\n", buffer);*/
 return buffer;
   }

/*Execute a command. Currently the command and the path is given inside the function*/
int execute_command(char *command, char *split_command)
{
  pid_t pid;
  char *exec_argv[3];
  int exec;
  int status;

  exec_argv[0] = command;
  exec_argv[1] = split_command;
  exec_argv[2] = NULL;
  if((pid = fork()) == -1)
    {
      perror("Fork");
    }
  if(pid == 0)
    {
      /* printf("%s", command);*/
     exec = execve(exec_argv[0], exec_argv, NULL);
     if(exec == -1)
       perror("Execve");
     exit(0);
     return (0);
    }
  else
    {
      wait(&status);
      printf("Child terminated");
   } 
  return (0);
}

/*Extract $PATH from env variable*/
char *extract_path(char **env)
{
  int i;
  char *path;
  int flag;
  char *s1;
  char *env9;

  s1 = "PATH=";
  for(i = 0; env[i] != '\0'; i++)
     {
    flag = 1;
      env9 = env[i];
      flag = strings_n_compare(s1, env9, 4);
      if(flag == 0)
	{
	  path = env9;
	}
    }
  return path;
}  

/*Compares string to find the path*/
int strings_n_compare(char *s1, const char *s, size_t n)
{
  size_t i;
  i = 0;
  while(((s1[i] != '\0') && (s1[i] == s[i])) && (i < n))
    {
      i++;
    }
  if(s1[i] == s[i])
    return 0;
  return (s1[i] - s[i]);
}

/*Checks whether a command is valid or not. If valid, returns the path else, return NULL*/
int validate_command(const char *whole_path)
{
  int validation;

  /*printf("inside_validation: %s\n", whole_path);*/
  validation = access(whole_path, F_OK);
  /*printf("%d\n", validation);*/
  return validation;
  }

/*Concatenate strings*/
char *concat_strings(char *dest, const char *src)
{
  int i, count = 0, j;
  for (i = 0; dest[i] != '\0' ; i++)
    {
      count++;
    }
  for (i = count, j = 0; src[j] != '\0'; i++, j++)
    {
      dest[i] = src[j];
    }
  return dest;
}

/*Compare 2 strings*/
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
