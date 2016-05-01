#include<stdio.h>
int string_digit(char *s);
int main(void)
{
  char *s;
  int p;
  s = "435645";
  p = string_digit(s);
  printf("%d\n", p);
  return (0);
}
