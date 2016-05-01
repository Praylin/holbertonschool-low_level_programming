#include<stdio.h>
int string_upper(char *s);
int main(void)
{
  char *s;
  int p;
  s = "";
  p = string_upper(s);
  printf("%d\n", p);
  return (0);
}
