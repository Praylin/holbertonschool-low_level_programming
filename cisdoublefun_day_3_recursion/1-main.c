#include <stdio.h>
int factorial(int n);

int main(void)
{
  int r;

  r = factorial(26);
  printf("%d\n", r);
  r = factorial(5);
  printf("%d\n", r);
  r = factorial(10);
  printf("%d\n", r);
  r = factorial(19999);
  printf("%d\n", r);
  return (0);
}
