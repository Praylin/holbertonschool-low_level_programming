#include <stdio.h>
int main(int ac, char *argv[])
{
  int i;
  
  i = 0;
  while(i < ac)
    {
      printf("%s\n", argv[i]);
      i++;
    }
  return(0);
}
