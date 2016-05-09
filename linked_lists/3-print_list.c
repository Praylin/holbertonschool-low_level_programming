#include "list.h"
#include <stddef.h>
int print_char(char c);
/*
function that prints each element of a list
*/
void print_list(List *list)
{
  List *temp;
  int length;
  int i;
  char *string;
  int j;

  temp = list;
  length = 1;
  while(temp->next != NULL) /*For traversing through the lists and finding the number of nodes*/
    {
      temp = temp->next;
      length++;
    }
temp = list; /*Reset temp to list*/
  for(i = 0; i < length; i++) 
    {
      string = temp->str;
      for(j = 0; string[j] != '\0'; j++)
	print_char(string[j]);
      if(i == length-1)
	print_char('\n');
      else
	{
           print_char(',');
           print_char(' ');
        }
      temp = temp->next;
    }
}
