#include <stdio.h>
void reverse_array(int *a, int n)
{
  int i,j, b[100];
  for (i = 0; i < n; i++)
    {
      b[i] = a[i];
      /* printf("%d", a[i]);
	 printf("%c", ',');*/
    }
  for (i = 0, j = n-1; i < n; i++, j--)
    {
      a[i] = b[j];
    }
  /* for(i = 0; i < n; i++)
    {
      printf("%d", a[i]);
      printf("%c", ',');
      }*/
}
