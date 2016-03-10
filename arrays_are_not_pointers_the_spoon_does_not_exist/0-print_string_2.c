int print_char(char c);
/* prints one char out of 2 of a string */
void print_string_2(char *str)
{
  int i;
  for (i = 0; str[i] != '\n'; i = i + 2)
    {
      print_char(str[i]);
    }
  print_char('\n');
}
