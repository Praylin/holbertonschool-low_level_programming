#include <stdlib.h>
#include "list.h"
/*
allocates a new node and links it to the to a list
*/
int add_node(List **list, char *content)
{
  List *node; /*Create a pointer to the List*/
  char *new_string;

  new_string = malloc(sizeof(List)); /*Allocate memory for the new pointer(node)*/
  if(new_string == NULL) /*If memory allocation fails*/
    return (1);
  new_string = content;
  node->str = new_string; /*Copy the contents in argument str to the member definition str of List (Initializing data to new node.*/
  node->next = *list; /*New node ‘next’ pointer pointing to the current first element of list*/
  return (0);
}
