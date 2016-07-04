#include "list.h"
#include<stddef.h>

int add_end_dl_list(List **list, char *str);
List *array_to_dl_list(char **array)
{
  List *list;
  int i;

  list = NULL;
  for(i = 0; array[i] != '\0'; i++)
    {
      if (add_end_dl_list(&list, array[i]) == 1)
	return NULL;
    }
  return list;
}
      
