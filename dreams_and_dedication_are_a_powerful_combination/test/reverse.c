#include <stdio.h>
void main()
{
int n = 98, temp = 0;
while(n > 0)
  {
    temp = temp * 10;
    temp = temp +(n%10);
    n = n / 10;
  }
 printf("%d",temp);
}
