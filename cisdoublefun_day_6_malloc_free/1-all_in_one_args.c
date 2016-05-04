#include <stdlib.h>
#include <stdio.h>
char *all_in_one_args(int ac, char **av)
{
  char *mem_space;
  char *arg;
  int i;
  int len;
  int j;
  /* int *all[100];*/
  
  i = 0;
  j = 0;
  while (j < ac)
    {
      arg = av[j];
      while(arg[i] != '\0')
	{
	  i++;
	}  
      len = i + 1;
      i = 0;
      mem_space = malloc((len+2) * sizeof(char));
      if (mem_space == NULL)
	return NULL;
      while(i < len)
	{
	  mem_space[i] = arg[i];
	  i++;
	}
      mem_space[i] = '\n';
      mem_space[i+1] = '\0';
      printf("%s", mem_space);
      /* all = mem_space;*/
      j++;
      /* all++;*/
    }
  return mem_space;
}

