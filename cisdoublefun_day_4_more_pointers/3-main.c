#include <stdio.h>
#include <string.h>
char *string_string(const char *haystack, const char *needle);
int main(void)
{
  char *haystack;
  char *needle;
  char *s;
  haystack = strdup("HolbertonSchool");
  needle = strdup("School");
  s = string_string(haystack,needle);
  printf("%s\n", s);
  return (0);
}
