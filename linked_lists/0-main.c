#include <stdlib.h>
#include "list.h"
#include <stdio.h>

int add_node(List **list, char *str);

int main(void)
{
  List *list;
  int res1;
  int res2;

  list = NULL;
  res1 = add_node(&list, "Holberton");
  printf ("%d\n", res1);
/* return (1);*/
  res2 = add_node(&list, "School");
  /*    return (1);*/
  printf("%d\n", res2);
  return (0);
}
