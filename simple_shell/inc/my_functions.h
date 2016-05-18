#include <stddef.h>

int execute_command(char *command, char *split_command);
int print_char(char c);
char *read_line(const int fd);
int strings_n_compare(char *s1, const char *s, size_t n);
int validate_command(const char *whole_path);
char *concat_strings(char *dest, const char *src);
char *extract_path(char **env);
void print_string(char *str);
int strings_compare(char *s1, const char *s2);
