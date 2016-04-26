/*Print all base16 numbers*/
int print_char(char c);
void print_base16(void)
{
  int i;
  char j;
  for (i = 0; i <= 9; i++)
    print_char(i+'0');
  for (j = 'A'; j <= 'F'; j++)
    print_char(j);
}
