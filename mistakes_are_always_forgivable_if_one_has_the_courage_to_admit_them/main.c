#include <stdlib.h>
#include <stdio.h>
int (*get_op_func(char c))(int, int);
int main(int ac, char **av)
{
  int num1 = atoi(av[1]);
  int num2 = atoi(av[3]);
  int result;
  char operator = *av[2];
  if (ac <= 1)
    printf("Enter operands and operator");
  result = (*get_op_func(operator))(num1, num2);
  printf("%d",result);
  return(0);
}
