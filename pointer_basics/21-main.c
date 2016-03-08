#include <stdio.h>

int main(void)
{
  int a[5];
  int *p;
  int *p2;
  *a = 98;
  printf("Value of a: %d\n", *a);
  printf("Address of a: %p\n", &a);
  *(a + 1) = 198;
  printf("Value of (a + 1): %d\n", *(a + 1));
  printf("Address of (a + 1): %p\n", a + 1);
  *(a + 2) = 298;
  p = a + 1;
  printf("Value of p: %p\n", p);
  *p = 98;
  printf("Value of p: %d\n", *p);
  p2 = a + 3;
  *p2 = *p + 1337;
  return(0);
}
