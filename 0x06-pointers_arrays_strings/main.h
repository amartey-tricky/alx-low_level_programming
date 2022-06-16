#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <unistd.h>

/* _putchar function */
int _putchar(char c);

/* function that concatenates two strings */
char *_strcat(char *dest, char *src);

/* function that concatenates two strings */
char *_strncat(char *dest, char *src, int n);

/* function that copies a string */
char *_strncpy(char *dest, char *src, int n);

/* function that compares two strings */
int _strcmp(char *s1, char *s2);

#endif