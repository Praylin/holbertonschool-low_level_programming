#include <stdio.h>

int main(void)
{
  int *p;
  int a[2];
  int n;
  p = &n;
  printf("p: %p\n", p);
  printf("p + 1: %p\n", p + 1);
  printf("p + 2: %p \n", p + 2);
  p = a;
  printf("p: %p\n", p);
  printf("p + 1: %p\n", p +1);
  return(0);
}
