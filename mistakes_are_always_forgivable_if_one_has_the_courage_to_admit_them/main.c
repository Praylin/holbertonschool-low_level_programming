/*calculator main.c*/
#include <stdlib.h>
#include <stdio.h>
int (*get_op_func(char c))(int, int);
int main(int ac, char **av)
{
  int num1;
  int num2;
  int result = 0;
  if ((ac == 4) && (*av[2] == '+' || '-' || '*' || '/' || '%'))
    {
      num1 = atoi(av[1]);
      num2 = atoi(av[3]);
      result = (*get_op_func(*av[2]))(num1, num2);
      printf("%d\n",result);
      return(0);
    }
  return(1);
}
