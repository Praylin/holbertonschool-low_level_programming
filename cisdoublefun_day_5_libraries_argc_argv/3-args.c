/*Print all the arguments*/
#include <stdio.h>
int main(int argc, char *argv[])
{
  int i = 0;
  while ( i < argc)
    {
      printf("%s", argv[i]);
      printf("\n");
      i++;
    }
  return 0;
}
