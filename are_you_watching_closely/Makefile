all: libprintf.a

libprintf.a:
	gcc -g -Wall -Werror -Wextra -pedantic -c printf.c print_char.c print_number.c print_string.c print_longnumber.c decimal_to_hex.c decimal_to_hexnumber.c
	ar -rc libprintf.a printf.o print_char.o print_number.o print_string.o print_longnumber.o decimal_to_hex.o decimal_to_hexnumber.o
	rm printf.o print_char.o print_number.o print_string.o print_longnumber.o decimal_to_hex.o decimal_to_hexnumber.o

clean:
	rm libprintf.a

re: clean all
