/*Print all the arguments in reverse order*/
#include <stdio.h>
int main(int argc, char *argv[])
{
  int i;
  i = (argc - 1);
  while ( i >= 0)
    {
      printf("%s", argv[i]);
      printf("\n");
      i--;
    }
  return 0;
}
