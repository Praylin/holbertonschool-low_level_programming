#include <stdlib.h>
#include <stdio.h>
int (*get_op_func(char c))(int, int);
int main(int ac, char **av)
{
  int num1 = atoi(av[1]);
  int num2 = atoi(av[3]);
  int operator = av[2];
  return (*get_op_func(char operator))(num1, num2);
}
