/*takes an integer in parameter and prints it*/
int print_char(char c);
void split_and_print(int n);
void print_number(int n)
{
  if ( n == 0)
    print_char('0');
  else if( n > 0)
    split_and_print(n);
  else
    {
      n = n * -1;
      print_char('-');
      split_and_print(n);
    }
}
void split_and_print(int n)
{
  int temp = 0;
  int digit = 0;
  while(n > 0) /*Reverse the number*/
  {
    temp = temp * 10;
    temp = temp + n%10;
    n = n / 10;
  } 
  while(temp > 0) /*Split the digits and print*/
  {
     digit = temp % 10;
     print_char(digit + '0');
     temp = temp / 10;
   }
}
