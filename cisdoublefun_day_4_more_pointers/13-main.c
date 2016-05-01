#include<stdio.h>
int string_printable(char *s);
int main(void)
{
  char *s;
  int p;
  s = "";
  p = string_printable(s);
  printf("%d\n", p);
  return (0);
}
