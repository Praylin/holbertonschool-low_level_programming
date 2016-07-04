#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "list.h"

void print_string(char *str);
void print_dl_list(List *list) {
  List *ptr;
  ptr = list;
  while(ptr != NULL) {
    print_string(ptr->str);
    ptr = ptr->next;
  }
  print_char("\n");
}
