#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <ctype.h>

/* _putchar function */
int _putchar(char c);

/* function that fills memory with a constant byte */
char *_memset(char *s, char b, unsigned int n);

/* function that copies memory area */
char *_memcpy(char *dest, char *src, unsigned int n);

/* function that locates a character in a string */
char *_strchr(char *s, char c);

/* function that gets the length of a prefix string */
unsigned int _strspn(char *s, char *accept);

#endif