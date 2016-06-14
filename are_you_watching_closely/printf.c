#include <stdarg.h>
/*Recodes printf function*/
int print_char(char c);
int print_string(char *str);
void print_number(int n);
void print_longnumber(long n);
void decimal_to_hex(long n);
void decimal_to_hexnumber(long n);
int printf(const char *format, ...)
{
  int i;
  int next;
  int size;
  int str_size;
  char *addr;
  long long_num;
  char letter;
  va_list args;

  size = 0;
  va_start(args, format);
  for(i = 0; format[i] != '\0'; i++) {
      if(format[i] == '%'){
          if(format[i+1] == 'd' || format[i+1] == 'i'){
            next = va_arg (args, int);
            print_number(next);
	    size = size + 2;
          }
	  else if(format[i+1] == 'u'){
              long_num = va_arg(args, long);
	      print_longnumber(long_num);
	      size = size + 8;
            }
	  else if(format[i+1] == 'p'){
              long_num = va_arg(args, long);
	      print_char('0');
	      print_char('x');
	      decimal_to_hex(long_num);
	      size = size + 8;
	    }
          else if(format[i+1] == 's'){
              addr = va_arg(args, char *);
	      str_size = print_string(addr);
	      size = size + str_size - 2;
            }
	  else if(format[i+1] == 'o'){
	      next = va_arg(args, int);
	      print_number(next);
	      size = size + 4;
	    }
	  else if(format[i+1] == 'x' || format[i+1] == 'X'){
	      long_num = va_arg(args, long);
	      decimal_to_hexnumber(long_num);
	      size = size + 8;
	    }
	  else if(format[i+1] == 'c'){
	      letter = va_arg(args, int);
	      print_char(letter + '0');
	      size = size + 1;
	    }
	  else{
	      print_char(format[i]);
	      print_char(format[i+1]);
	      size = size + 2;
	    }
	  i = i + 1;
	  }
      else
	print_char(format[i]);
    }
  va_end(args);
  size = size + i - 2;
  return (size);
}
