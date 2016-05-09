#include <stdlib.h>
#include "list.h"
int find_len(char *av);
char *copy(char *av, int len);
/*
Function that creates a new list from the command line arguments.
*/
List *params_to_list(int ac, char **av)
{
  int i;
  List *node;
  List *head;
  char *new_str;
  int len;
  List *temp;
  
  len = 0;
  head = NULL; /*Initial pointer for the linked list*/
  node = (List *)malloc(sizeof(List)); /*Allocate memory for first node*/
  if(node == NULL) /*If memory allocation fails*/
    return (NULL);
  len = find_len(av[0]); 
  new_str = copy(av[0], len);
  node->str = new_str; 
  node->next = NULL;
  head = node; /*Set the initial pointer as the address of first node*/
  temp = head; /*temp is a list type variable used to iterate through the list*/
  for(i = 1; i < ac; i++) /*Do for all command line arguments starting from 1*/
    {
      node = (List *)malloc(sizeof(List));
      if(node == NULL) /*If memory allocation fails*/
	return (NULL);
      len = find_len(av[i]);;
      new_str = copy(av[i], len);
      node->str = new_str;
      node->next = NULL;
      while(temp->next != NULL) /*For traversing through the lists*/
	{
	  temp = temp->next;
	}
      temp->next = temp; /*Built the link*/
    }
  return (head);
}

/*Finds the length of a string*/
int find_len(char *av)
{
  int i;

  for(i = 0; av[i] != '\0'; i++);
  return (i);
}

/*Do string duplication*/
char *copy(char *av, int len)
{
  int i;
  char *new_str;

  new_str = malloc((len + 1) * sizeof(av));
  if(new_str == NULL) /*If memory allocation fails*/
    return (NULL);
  for( i = 0; av[i] != '\0'; i++)
    new_str[i] = av[i];
  return (new_str);
}
