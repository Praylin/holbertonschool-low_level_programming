#include "list.h"
#include<stdlib.h>
/*
Function that allocates a new node and links it to the end of the list

Requirements:-
The parameter list holds the address of the first node of the list. If the list is empty, you have to change the address held by *list.
If the function fails, it must return 1. Otherwise, the function must return 0.
The string str of the new node must contain a copy of the string content, so if the string content is modified, the element str of the new node won't be affected.
The new nodemust be added at the end of the list. It becomes the last element of the list.
*/
int add_node(List **list, char *content)
{
  List *node;
  int i;
  char *new_string;

  node = (List *)malloc(sizeof(List)); /*Since malloc returns a (void *) pointer and we need a (List *) pointer. Thats why typecasting*/ 
  if(node == NULL)
    return (1);
  for(i = 0; content[i] != '\0'; i++);
  new_string = malloc((i+1) * sizeof(char));
  if(new_string == NULL)
    return (1);
  for(i= 0; content[i] != '\0'; i++) /*Making a copy of content*/
    new_string[i] = content[i];
  node->str = new_string;
  node->next = NULL; /*Set the address of the last node as NULL*/
  *list = node;
  return (0);
}
