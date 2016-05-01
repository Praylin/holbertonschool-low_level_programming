char *string_string(const char *haystack, const char *needle)
{
int i;
int j;
int sub;
  
i = 0;
j = 0;

while (haystack[i] != '\0')
  {
if (needle[i] == '\0')
  {
break;
}
 else if (haystack[i] == needle[j])
   {
i++;
j++;
sub = 1;
}
 else
   {
i++;
j = 0;
sub = 0;
}
}
if (sub == 0)
  {
return (0);
}
 else if (sub == 1)
   {
return (haystack + i - j);
}
return haystack;
}
