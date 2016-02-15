#include <stdio.h>
void main()
{
  int n = 98, digit =0;
  while ( n > 0)
    {
      digit = n % 10;
      n = n/10;
      printf("%d",digit
