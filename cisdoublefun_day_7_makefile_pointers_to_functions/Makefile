CC = gcc
CFLAGS = -Wall -Werror -Wextra -pedantic
VPATH = src
SOURCE = src/0-absolute.c src/1-cap_string.c src/1-uppercase.c src/3-print_string.c src/5-square_root.c src/positive_or_not.c src/0-contact_strings.c src/1-nconcat_strings.c src/2-print_array.c src/3-string_ncopy.c src/5-string_to_integer.c src/print_char.c src/0-first_digit.c src/1-power.c src/2-string_copy.c src/4-reverse_string.c src/6-is_prime_number.c src/print_number.c src/0-lowercase.c src/1-string_concat.c src/2-string_nconcat.c src/4-strings_compare.c src/uppercase_string.c src/0-uppercase_string.c src/1-swap_int.c src/2-str_len.c src/5-reverse_array.c src/positive.c
OBJECT=$(patsubst %.c, %.o, $(SOURCE))

all : libholbertonschool.a 

libholbertonschool.a : $(OBJECT)
	ar -rc libholbertonschool.a $(OBJECT)

%.o : src/%.c
	$(CC) $(CFLAGS) -c $< 

re:
	ar rc libholbertonschool.a $(OBJECT)

clean:
	 rm libholbertonschool.a


