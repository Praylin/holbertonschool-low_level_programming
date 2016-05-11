/*
Program that prints the permissions of a file
*/
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <stdio.h>

int print_char(char c);
int main(int ac, char **av)
{
  char *filename = av[1];
 
  if (ac == 2)
    {
      struct stat sb;

      if (stat(filename, &sb) == -1)
	return 1;
      
      print_char((S_ISDIR(sb.st_mode)) ? 'd' : '-');
      print_char((sb.st_mode & S_IRUSR) ? 'r' : '-');
      print_char((sb.st_mode & S_IWUSR) ? 'w' : '-');
      print_char((sb.st_mode & S_IXUSR) ? 'x' : '-');
      print_char((sb.st_mode & S_IRGRP) ? 'r' : '-');
      print_char((sb.st_mode & S_IWGRP) ? 'w' : '-');
      print_char((sb.st_mode & S_IXGRP) ? 'x' : '-');
      print_char((sb.st_mode & S_IROTH) ? 'r' : '-');
      print_char((sb.st_mode & S_IWOTH) ? 'w' : '-');
      print_char((sb.st_mode & S_IXOTH) ? 'x' : '-');
      print_char('\n');
    }
  else
    return 1;
  return 0;
}

int print_char(char c)
{
  return (write(1, &c, 1));
}
