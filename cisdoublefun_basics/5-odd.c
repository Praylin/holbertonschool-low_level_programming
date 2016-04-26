/*Odd oe even using bitwise operator*/
int print_char(char c);
char odd(int n)
{
  if (n & 1)
    return('O');
  return('E');
}
