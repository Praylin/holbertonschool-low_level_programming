#include <stdlib.h>
#include "list.h"

char *copy(char *content, int len);
int find_len(char *content);
int insert_in_list(List **list, char *content, int index)
{
  List *temp;
  int length;
  int i;
  int str_len;
  List *head;
  List *temp_pos;
  
  head = *list;
  temp = *list;
  length = 0;
  while(temp->next != NULL) /*For traversing through the lists and finding the number of nodes*/
    {
      temp = temp->next;
      length++;
    }
  temp = *list;
  if(index < 0)
    return 0;
  else
    {
      temp = (List *)malloc(sizeof(List));
      if(temp == NULL) /*If memory allocation fails*/
	return (1);
      str_len = find_len(content);
      temp->str = copy(content, str_len);
      if(index == 0)
	{
	  temp->next = head;
	  head = temp;
	}
      else if((index > 0) && (index < length))
	{
	  temp_pos = head;
	  for(i = 0; i < index-1; i++)
	    temp_pos = temp_pos->next;
	  temp->next = temp_pos->next;
	  temp_pos->next = temp;
	}
      else if(index >= length)
	{
	  temp_pos = head;
          for(i= 0; i < index-1; i++)
            temp_pos = temp_pos->next;
	  temp->next = NULL;
	  temp_pos = temp;
	}      
    }
  return (0);
}

char *copy(char *content, int len)
{
  int i;
  char *new_str;

  new_str = malloc((len + 1) * sizeof(content));
  if(new_str == NULL) /*If memory allocation fails*/
    return (NULL);
  for( i = 0; content[i] != '\0'; i++)
    new_str[i] = content[i];
  return (new_str);
}

int find_len(char *av)
{
  int i;

  for(i = 0; av[i] != '\0'; i++);
  return (i);
}
