/*Prints a string using print_char.c*/
int print_char(char c);
int print_string(char *str)
{
  int i;
  for (i = 0; str[i] != '\0'; i++) {
    print_char(str[i]);
  }
  return i;
}
