/*Convert to uppercase*/
char uppercase(char);
char uppercase(char c)
{
  if ( c >= 97 && c <= 122)
    {
      c = c - 32;
      return (c);
    }
  else
    {
      return(c);
    }
}
