#include <sys/types.h>
#include <dirent.h>
#include <sys/wait.h>
#include <unistd.h>

/*Checks whether a command is valid or not. If valid, returns the path*/
int validate_command(const char *whole_path)
{
  int validation;

  validation = access(whole_path, F_OK);
  return validation;
}

