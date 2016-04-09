CC = gcc
CFLAGS = -Wall -Werror -Wextra -pedantic
SRC = main.c get_op_func.c op_functions.c
OBJECTS = $(SRC:.c = .o)

all: 2-calculator

2-calculator: $(OBJECTS)
	$(CC) -o 2-calculator $(OBJECTS)

$(OBJECTS): $(SRC)
	$(CC) -c $(SRC)

 

