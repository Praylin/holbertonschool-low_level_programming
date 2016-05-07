#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
char **string_split(char *);
void print_tab(char **tab);
void free_tab(char **tab);
int print_char(char c);
int main(void)
{
  char **tab;

  tab = string_split("Holberton School         #cisfun");
  print_tab(tab);
  free_tab(tab);
  return (0);
}

void print_tab(char **tab)
{
  int i;
  char *string;
  int j;

  for(i = 0; tab[i] != '\0'; i++)
    {
      string = tab[i];
      for(j = 0; string[j] != '\0'; j++)
	print_char(string[j]);
    }
}

int print_char(char c)
{
  return (write(1, &c, 1));
}

void free_tab(char **tab) 
{
  int i;

  for(i = 0;tab[i] != '\0'; i++)
    free(tab[i]);
}
