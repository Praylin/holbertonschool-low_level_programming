CC= gcc
CFLAGS = -Wall -pedantic -Werror -Wextra
FILES = 3-cat.c
EXE = 3-cat

all: $(EXE)

$(EXE): $(FILES)
	$(CC) $(CFLAGS) $^ -o $@

clean:
	rm -f $(EXE)
