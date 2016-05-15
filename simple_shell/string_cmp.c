#include <stdio.h>

int main()
{
  char *s1 = "PATH=";
  char *s2 = "PATH=/usr/local/bin:/usr/local/sbin:/usr/bin:/bin:/usr/sbin:/sbin:/usr/local/bin:/usr/bin:/bin:/usr/sbin:/sbin";
  int flag;
  
  flag = strings_n_compare(s1,s2,4);
  printf("%d\n", flag);
  return (0);
}

int strings_n_compare(char *s1, const char *s, size_t n)
{
  size_t i;
  i = 0;
  while(((s1[i] != '\0') && (s1[i] == s[i])) && (i < n))
    {
      i++;
    }
  if(s1[i] == s[i])
    return 0;
  return (s1[i] - s[i]);
}