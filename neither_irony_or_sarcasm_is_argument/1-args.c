/*Print all the arguments in each line*/
#include <stdio.h>
int main(int ac, char **av)
{
  int i = 0;
  for (i = 0; i < ac; i++)
    {   
      printf("%s\n", av[i]);
    }
  return 0;
}
