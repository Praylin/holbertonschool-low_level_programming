#include "list.h"
#include <stddef.h>
/*
function that returns the number of node in a list
*/
int list_size(List *list)
{
  List *temp;
  int count;

  temp = list;
  count = 1;
  while(temp->next != NULL) /*For traversing through the lists*/
    {
      temp = temp->next;
      count++;
    }
  return(count);
}
