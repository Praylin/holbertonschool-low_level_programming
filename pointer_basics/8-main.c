#include <stdio.h>

void modif_my_char_var(char *cc, char ccc)
{
  *cc = 'o';
  ccc = '1';
}
int main(void)
{
  char c;
  char *p;
  p = &c;
  c = 'H';
  printf("Before function call\n");
  printf("Value of c:%c\n", c);
  printf("Address of c:%p\n", &c);
  printf("Value of p:%p\n", p);
  printf("Address of p:%p\n", &p);
  modif_my_char_var(p, c);
  printf("After function call\n");
  printf("Value of c:%c\n", c);
  printf("Address of c:%p\n", &c);
  printf("Value of p:%p\n", p);
  printf("Address of p:%p\n", &p);
  return(0);
}
