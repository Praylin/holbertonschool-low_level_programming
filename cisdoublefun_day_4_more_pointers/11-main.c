#include<stdio.h>
int string_lower(char *s);
int main(void)
{
  char *s;
  int p;
  s = "";
  p = string_lower(s);
  printf("%d\n", p);
  return (0);
}
