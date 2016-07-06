#include <stdio.h>
#include "hashtable.h"
HashTable *ht_create(unsigned int size);
int print_hashtable(HashTable *ht);

int main()
{
  HashTable *addr = ht_create(5);
  print_hashtable(addr);
  return 0;
}

int print_hashtable(HashTable *ht) {
  unsigned int i = 0;
  List *listptr;
  for ( ; i<ht->size ; i++) {
    printf("%d\n", i);
    /* traverse list */
    listptr = ht->array[i];
    printf("\t--------\n");
    while (listptr != NULL) {
      printf("\tkey: %s\n\tval: %s\n\t--------\n", listptr->key, listptr->value);
      listptr = listptr->next;
    }
    printf("\tNULL\n\t--------\n");
  }
  return 0;
}
