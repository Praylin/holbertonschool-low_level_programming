#include "hashtable.h"
#include <stddef.h>
#include <stdlib.h>

/*Function creates Hashtable*/
HashTable *ht_create(unsigned int size)
{
  HashTable *new_table;
  unsigned int i;

  if (size<1) 
    return NULL;
  /*Allocate memory for table structure*/
  new_table = malloc(sizeof(HashTable));
  if(new_table == NULL)
    return NULL;
  /*Allocate memory for array to contain cells with size 'size'*/
  new_table->array = malloc(sizeof(List *) * size);
  if(new_table->array == NULL)
    return NULL;
  /* Initialize the elements of the table */
  for(i = 0; i < size; i++) 
    new_table->array[i] = NULL;
  /* Set the table's size */
  new_table->size = size;
  return new_table;
}
  
