#include <stdio.h>
int factorial(int n);

int main(void)
{
  int r;

  r = factorial(1);
  printf("%d\n", r);
  r = factorial(5);
  printf("%d\n", r);
  r = factorial(10);
  printf("%d\n", r);
  r = factorial(-102400);
  printf("%d\n", r);
  return (0);
}
