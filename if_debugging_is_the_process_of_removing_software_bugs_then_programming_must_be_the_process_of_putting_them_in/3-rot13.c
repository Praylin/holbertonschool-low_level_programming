 char *rot13(char *s)
{
  int i, temp = 0;
  for (i = 0; s[i] != '\0'; i++)
    { 
     
	  if (s[i] >= 97 && s[i] <= 122)
	    {
	      if( s[i] + 13 > 122)
		{
		  temp = (s[i] + 12) - 122;
		  s[i] = 97 + temp;
		}
	      else
		s[i] = s[i] + 13;
	    }
	  else if(s[i] >= 65 && s[i] <= 90)
	    {
	      if (s[i] + 13 > 90)
		{
		  temp = (s[i] + 12) - 90;
		  s[i] = 65 + temp;
		}
	      else
		s[i] = s[i] + 13;
	    }
	}
    
  return s;
}
