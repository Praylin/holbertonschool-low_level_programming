CC= gcc
CFLAGS = -Wall -pedantic -Werror -Wextra
FILES = 1-copy_content.c
EXE = 1-copy_content

all: $(EXE)

$(EXE): $(FILES)
	$(CC) $(CFLAGS) $^ -o $@

clean:
	rm -f $(EXE)
