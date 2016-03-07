#include <stdio.h>
void reverse_string(char *s)
{
  int i, j, count = 0;
  char t[50];
  for (i = 0; s[i] != '\0' ; i++)
    {
      count++;
    }
  printf("%d", count);
  for (j = 0; j < count; j++)
    {
      t[j] = s[count];
      count--;
    }
  /* printf("%s",t);*/
}
