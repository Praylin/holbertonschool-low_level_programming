/*function that reverses a string.*/
void reverse_string(char *s)
{
  int i, j, count = 0;
  char t[50];
  for (i = 0; s[i] != '\0' ; i++)
    {
      count++;
    }
  for (i = count - 1, j = 0; i >= 0; i--, j++)
    {
      t[j] = s[i];
    }
  for (i = 0; i < count; i++)
    {
      s[i] = t[i];
    }
}
