/*Print lowercase alphabets in reverse order*/
int print_char(char c);
void print_tebahpla(void)
{
  char i = 'z';
  while( i >= 'a')
    {
      print_char(i);
      i--;
    }
}
