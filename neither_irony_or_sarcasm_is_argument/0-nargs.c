/*Print the number of arguments*/
#include <stdio.h>

int main(int ac, char **av)
{
  int i, count = 0;
  for (i = 1; av[i] !='\0'; i++)
    count++;  
  if (count == ac-1)
    printf("%d\n",count);
  return(0);
}
