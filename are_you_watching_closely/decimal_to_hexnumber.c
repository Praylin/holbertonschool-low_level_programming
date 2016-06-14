/*Convert decimal number to hex where the letters of hex will be caps*/
int print_char(char c);
void decimal_to_hexnumber(long n)
{
  long int quotient;
  int i=1,j,temp;
  char hexadecimalNumber[100];

  quotient = n;
  while(quotient!=0){
    temp = quotient % 16;
    if( temp < 10)
      temp =temp + 48;
    else
      temp = temp + 55;
    hexadecimalNumber[i++]= temp;
    quotient = quotient / 16;
  }
  for(j = i -1 ;j> 0;j--)
    print_char(hexadecimalNumber[j]);
}
