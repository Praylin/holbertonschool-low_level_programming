#include<stdio.h>
int string_alpha(char *s);
int main(void)
{
  char *s;
  int p;
  s = "";
  p = string_alpha(s);
  printf("%d\n", p);
  /*p = string_alpha("ggghj55556667");
  printf("%d", p);
  p = string_alpha("45bhmmmmmmmmmmmmmmmv@#$%");
  printf("%d", p);*/
  return (0);
}
