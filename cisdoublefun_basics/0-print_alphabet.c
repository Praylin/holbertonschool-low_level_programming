/*Print the lowercase alphabets*/
int print_char(char c);
void print_alphabet(void)
{
  char i = 'a';
  while (i <= 'z')
    {
      print_char(i);
      i++;
    }
}
