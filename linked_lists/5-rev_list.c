#include "list.h"
#include <stddef.h>

void rev_list(List **list)
{
  List *prev;
  List *current;
  List *next;
  
  prev = NULL;
  current = *list;
  while (current != NULL)
	{
	  next  = current->next;  
	  current->next = prev;   
	  prev = current;
	  current = next;
	}
      *list = prev;
}
