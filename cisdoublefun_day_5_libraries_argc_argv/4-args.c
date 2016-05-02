/*Print all the arguments in reverse order*/
#include <unistd.h>
int print_char(char c);
int main(int argc, char *argv[])
{
  int i, j = 0;
  char *str;
  i = (argc - 1);
  while ( i >= 0)
    {
      str = argv[i];
      j = 0;
      while (str[j] != '\0')
        {
          print_char(str[j]);
          j++;
        }
      print_char('\n');
      i--;
    }
  return 0;
}

int print_char(char c)
{
  return (write(1, &c, 1));
}
