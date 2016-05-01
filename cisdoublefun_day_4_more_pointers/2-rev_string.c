/*Reverse a string*/
char *rev_string(char *str)
{
  int i = 0, j = 0;
  char temp;
  while(str[i] != '\0')
    {
      i++;
    }
  i = i - 1;
  while(i > j)
    {
      temp = str[i];
      str[i] = str[j];
      str[j] = temp;
      i--;
      j++;
    }
  return str;
}
