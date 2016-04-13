#include <stdlib.h>
#include <stdio.h>
int find_len(char *s);
char *string_nconcat(char *s1, char *s2, int n)
{
  char *s = NULL;
  int i,first_len, j, k, sec_len, len;
  first_len = find_len(s1);
  sec_len = find_len(s2);
  len = first_len + sec_len;
  s = malloc((sizeof(char)) * len);
  for (i = 0; i < first_len; i++)
    s[i] = s1[i];
  for (j = first_len, k = 0 ; k < n; j++, k++)
    {
      s[j] = s2[k];
    }
  s[j+1] = '\0';
  return s;
}

int find_len(char *s)
{
  int i, count = 0;
  for (i = 0; s[i] != '\0'; i++)
    count++;
  return count;
}
