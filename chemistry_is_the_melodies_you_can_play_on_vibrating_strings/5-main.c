#include <stdio.h>
void reverse_array(int *a, int n);
void print_array(int *a, int n);
int print_char(char c);

int main(void)
{
  int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 98, 1024, 1337};

  print_array(a, sizeof(a) / sizeof(int));
  /*for(i = 0; i < 13; i++)
    {
      printf("%d", a[i]);
      }*/
  reverse_array(a, sizeof(a) / sizeof(int));
  /*for(i = 0; i < 13; i++)
    {
      printf("%d", a[i]);
      }*/
  print_array(a, sizeof(a) / sizeof(int));
  return (0);
}
