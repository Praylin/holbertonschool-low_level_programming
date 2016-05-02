#include <stdio.h>
#include <string.h>
char *string_string(char *haystack, char *needle);
int main(void)
{
  char *haystack;
  char *needle;
  char *s;
  haystack = strdup("HolbertonSchool");
  needle = strdup("ber");
  s = string_string(haystack,needle);
  printf("%s\n", s);
  return (0);
}
