#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <ctype.h>

/* _puchar function */
int _putchar(char c);

/* function that creates an array of chars and initializes with a specific char */
char *create_array(unsigned int size, char c);

/* function that returns a pointer to a newly a newly allocated space in memory */
char *_strdup(char *str);

/* function that concatenates two strings */
char *str_concat(char *s1, char *s2);

/* function that prints a pointer to a two dimensional array */
int **alloc_grid(int width, int height);

/* function that frees a two dimensional array */
void free_grid(int **grid, int height);

/* function that concatenates all arguments passed to the program */
char *argstostr(int ac, char **av);

#endif
