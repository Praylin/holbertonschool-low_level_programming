#include <stdio.h>
int strings_n_compare(char *s1, const char *s, size_t n);

int main(void)
{
  char s1[] = "Hello";
  char s2[] = "World!";

  printf("%d\n", strings_n_compare(s1, s2, 3));
  printf("%d\n", strings_n_compare(s2, s1, 3));
  printf("%d\n", strings_n_compare(s1, s1, 3));
  return (0);
}
