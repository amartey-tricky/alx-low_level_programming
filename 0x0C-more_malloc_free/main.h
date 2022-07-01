#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <ctype.h>
#include <limits.h>

/* _putchar function */
int _putchar(char c);

/* function that allocates memory using malloc */
void *malloc_checked(unsigned int b);

/* function that concatenates two strings */
char *string_nconcat(char *s1, char *s2, unsigned int n);

/* function that allocates memory to an array using malloc */
void *_calloc(unsigned int nmemb, unsigned int size);

/* functino that creates an array of integers */
int *array_range(int min, int max);

#endif
