#include <stdio.h>
#include <stdlib.h>

int _putchar(char n);
char *create_array(unsigned int size, char c);
char *_strdup(char *Str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
int **free_array(int **array, int row);
void free_grid(int **grid, int height);
char *argstostr(int ac, char **av);
int len_arr(int argc, char **argv);
char **free_arr(char **array, int row);
char **strtow(char *str);
