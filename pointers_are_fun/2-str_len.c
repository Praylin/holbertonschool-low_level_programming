/* function that returns the length of a string*/
int str_len(char *str)
{
  int i = 0;
  int count = 0;
  for (i = 0; str[i] != '\0' ; i++)
    {
      count++;
    }
  return(count);
}
