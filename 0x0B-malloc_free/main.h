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

#endif
