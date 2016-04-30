#include <stdio.h>
int power(int x, int y);

int main(void)
{
  int r;

  r = power(1, 10);
  printf("%d\n", r);
  r = power(1024,1);
  printf("%d\n", r);
  r = power(25333334, 160);
  printf("%d\n", r);
  r = power(5, 2);
  printf("%d\n", r);
  r = power(5, -2);
  printf("%d\n", r);
  r = power(-5, 3);
  printf("%d\n", r);
  return (0);
}
