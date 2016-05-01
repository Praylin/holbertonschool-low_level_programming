/*function that returns the first number contained in a string.*/
int string_to_integer(char *s);
int string_to_integer(char *s)
{
  char asc;
  int num = 0 , i , n[10], exp = 0;
  for (asc = 48; asc <= 57; asc++)
    {
      if (*s == asc)
      {
	 for (i = 0; s[i] != '\0'; i++)
	  {
	    n[i] = s[i] - '0';
	    if(i > 10)
	      {
		return(0);
		break;
	      }
	  }
	for (exp= 0; exp < i; exp++)
	  {
	    if(num > 2147483647)
	      {
		return(0);
		break;
	      }
	    else if(num == 2147483647)
	      {
		return(num);
	      }
	    else
	      {
		num = 10 * num + n[exp];
		if(num < -2147483647)
		  return(0);
	      }
	  }
      }
    }
    return(num);
}


