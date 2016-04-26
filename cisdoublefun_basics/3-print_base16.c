/*Print all base16 numbers*/
int print_char(char c);
void print_base16(void)
{
  int i = 0;
  char j = 'A';
  while (i <= 9)
    {
      print_char(i+'0');
      i++;
    }
  while (j <= 'F')
    {
      print_char(j);
      j++;
    }
}
