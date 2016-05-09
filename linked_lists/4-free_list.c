#include <stdlib.h>
#include "list.h"
/*
function that frees a list
*/
void free_list(List *list)
{
  free(list);
}
