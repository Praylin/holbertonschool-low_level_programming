#include "hashtable.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int ht_put(HashTable *hashtable, const char *key, const char *value)
{
  unsigned int index;
  List *new_list;
  index = hash(key, 5);
  printf("%ui", index);
  new_list = malloc(sizeof(List));
  if(new_list == NULL)
    return 1;
  new_list->value = strdup(value);
  new_list->next = hashtable->array[index];
  hashtable->array[index] = new_list;
  return 0;
}
