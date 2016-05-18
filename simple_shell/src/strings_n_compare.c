#include <stddef.h>

/*Compares string to find the path*/
int strings_n_compare(char *s1, const char *s, size_t n)
{
  size_t i;
  i = 0;

  while(((s1[i] != '\0') && (s1[i] == s[i])) && (i < n)) {
    i++;
  }
  if(s1[i] == s[i]) {
    return 0;
  }
  return (s1[i] - s[i]);
}
