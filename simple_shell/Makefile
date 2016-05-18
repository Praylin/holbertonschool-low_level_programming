CC = gcc 
CFLAGS = -Wall -Wextra -pedantic -Werror -Iinc
VPATH = ./src
SOURCES = concat_strings.c extract_path.c main.c print_char.c read_line.c strings_n_compare.c execute_command.c print_string.c strings_compare.c validate_command.c
LIBRARY = libshell.a
OBJECTS = $(SOURCES:.c=.o)
TARGET = simple_shell

all: $(TARGET)

$(TARGET) : $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) $(VPATH)/$(LIBRARY) -o $(TARGET)

clean:
	rm $(OBJECTS)

re: clean all
