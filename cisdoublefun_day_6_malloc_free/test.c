#include <stdlib.h>
#include <stdio.h>
int find_len(char *str);
char *concat_string(char *dest, char *src);
char *all_in_one_args(int ac, char **av)
{
  int i;
  int len;
  char *each_string;
  char *all_string;
  char *whole_string;
  int all_len;

  i = 0;
  all_string = NULL;
  len = 0;
  while(i < ac)
    {
      printf("%d\n", i);
      printf("%d\n", ac);
      each_string = av[i];
      printf("%s", each_string);
      printf("\n");
      /*len = find_len(each_string);*/
      len = 12;
      printf("%d", len);
      each_string[len + 1] = '\0';
      each_string[len + 2] = '\n';
      all_string = concat_string(all_string, each_string);
      i++;
    }
  all_len = find_len(all_string);
  whole_string = malloc(all_len * sizeof(char));
  return whole_string;
}


int find_len(char *str)
{
  int i;

  i = 0;
  printf("%d", i);
  while(str[i] != '\0')
    {
      printf("%d", i);
      i++;
    }
  return i;
}

char *concat_string(char *dest, char *src)
{
  int i;
  int len;
  
  i = 0;
  len = find_len(dest);
  while(src[i] != '\0')
    {
      dest[len] = src[i];
      len++;
      i++;
    }
  len = 0;
  return dest;
}
