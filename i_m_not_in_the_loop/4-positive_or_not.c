#include "my_functions.h"
/*Checks whether a number is +ve, -ve or 0 */
void positive_or_not(int n)
{
  if ( n > 0)
    {
      print_char('P');
    }
  else if ( n < 0)
    {
      print_char('N');
    }
  else
    {
      print_char('Z');
    }
}
  
