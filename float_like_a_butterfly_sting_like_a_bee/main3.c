#include <stdio.h>
#include <stdlib.h>
int main(void)
{
  int *tab;
  tab = malloc(sizeof(*tab) * 3);
  tab[0] = 23;
  tab[1] = -27;
  tab[2] = 792;
  printf("%d, %d, %d", tab[0], tab[1], tab[2]);
  return(0);
}
