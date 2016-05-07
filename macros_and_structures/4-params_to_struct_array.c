#include <stdlib.h>
#include "param_struct.h"
struct Param *params_to_struct_array(int ac, char **av)
{
  struct Param *parameter;
  int i;

  parameter = malloc(sizeof(struct Param));
  if (parameter == NULL)
    return NULL;
  for(i = 0; i < ac; i++)
    {
      parameter->str[i] = av[i];
    }
  
  
