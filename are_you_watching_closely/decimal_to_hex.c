/*Function to convert a decimal number to hex where the letters of hex are small*/
int print_char(char c);
void decimal_to_hex(long n)
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
      temp = temp + 87;
    hexadecimalNumber[i++]= temp;
    quotient = quotient / 16;
  }
  for(j = i -1 ;j> 0;j--)
    print_char(hexadecimalNumber[j]);
}
