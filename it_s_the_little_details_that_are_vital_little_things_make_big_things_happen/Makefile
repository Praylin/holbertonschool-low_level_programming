CC = gcc
CFLAGS = -Wall -pedantic -Werror -Wextra
SRC = 0-absolute.c 1-cap_string.c 2-print_array.c 3-print_string.c 5-string_to_integer.c print_number.c 0-contact_strings.c 1-nconcat_strings.c 2-square_root.c 3-string_ncopy.c main.c 0-first_digit.c 1-power.c 2-string_copy.c 4-reverse_string.c positive.c 0-lowercase.c 1-swap_int.c 2-str_len.c 4-strings_compare.c positive_or_not.c 0-uppercase_string.c 1-uppercase.c 3-is_prime_number.c 5-reverse_array.c print_char.c
VPATH = src
OBJECTS = $(SRC:.c = .o)

all: libholbertonschool.a

libholbertonschool.a: $(OBJECTS)
	ar rc libholbertonschool.a $(OBJECTS)
	ranlib libholbertonschool.a

$(OBJECTS) : $(VPATH)/$(SRC)
	$(CC) -c $(VPATH)/$(SRC)

clean:
	rm libholbertonschool.a
	rm $(OBJECTS)

re:
	ar rc libholbertonschool.a $(OBJECTS)
	ranlib libholbertonschool.a
