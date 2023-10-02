#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int _putchar(char c);
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char *argstostr(int ac, char **av);
char **strtow(char *str);
void utility_func(char **words, char *str);
void _create_word(char **words, char *str, int start, int end, int index);

#endif/*created with love 🥰*/
