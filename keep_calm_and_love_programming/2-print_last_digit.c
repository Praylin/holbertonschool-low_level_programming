#include "my_functions.h"
/*Print last digit*/
void print_last_digit(int n)
{
   if ( n > 0 )
    {
      n = n % 10;
      print_char(n + '0');
    }
  else 
    {
      n = n * -1;
      n = n % 10;
      print_char(n + '0');
    }
}
