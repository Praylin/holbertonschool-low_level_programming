#include <unistd.h>
#include <stdio.h>

int validate(const char *path);
int main()
{
  const char *path = "/bin/ls";
  int validation;
  
  validation = validate(path);
  printf("%d", validation);
  return (0);
}

int validate(const char*path)
{
  int validation;

  validation = access(path, F_OK);
  return validation;
}
