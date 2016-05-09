#include <stdlib.h>
#include "list.h"
/*
Allocates a new node and links it to the to a list. The new node is added at the beginning of the list.

Requirements :-

The parameter list holds the address of the first node of the list. If the list is empty, you have to change the address held by *list.
If the function fails, it must return 1. Otherwise, the function must return 0.
The string str of the new node must contain a copy of the string content, so if the string content is modified, the element str of the new node won't be affected.
The new node must be added at the beginning of the list. It becomes the first element of the list.
*/

int add_node(List **list, char *content)
{
  List *node; /*Initialize a pointer of type List*/
  char *new_string;
  int i;

  node = (List *)malloc(sizeof(List)); /*Allocate memory for the new pointer(node)*/
  if(node == NULL) /*If memory allocation fails*/
    return (1);
  for(i = 0; content[i] != '\0'; i++); /*Finding length of content*/
  new_string = malloc((i+1) * sizeof(char));
  for(i = 0; content[i] != '\0'; i++) /*Copying content to str*/
    new_string[i] = content[i];
  node->str = new_string; /*Copying new_string to the member definition str of List (Initializing data to new node).*/
  node->next = *list;
  *list = node; /*Node is pointing to the pointer which holds address of first node(the one which is created above).*/
  return (0);
}
