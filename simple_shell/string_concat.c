#include <stdio.h>

char *concat_strings(char *dest, const char *src);

int main(void)
{
  char s1[20] = "/";
  char *s2 = "ls";
  char *p;

  /*  printf("%s\n", s1);
      printf("%s", s2);*/
  p = concat_strings(s1, s2);
  /*printf("%s", s1);
    printf("%s", s2);*/
  printf("%s\n", p);
  return (0);
}

char *concat_strings(char *dest, const char *src)
{
  int i, count = 0, j;
  for (i = 0; dest[i] != '\0' ; i++)
    {
      count++;
    }
  for (i = count, j = 0; src[j] != '\0'; i++, j++)
    {
      dest[i] = src[j];
    }
  return dest;
}
