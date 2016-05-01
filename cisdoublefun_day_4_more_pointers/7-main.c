#include <stdio.h>
char *lowercase_string(char *);

int main(void)
{
  char s[] = "HOL$%^&fghjBERTON SCHOOL!\n";
  char *p;

  p = lowercase_string(s);
  printf("%s", p);
  printf("%s", s);
  return (0);
}
