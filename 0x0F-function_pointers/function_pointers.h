#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <unistd.h>
#include <limits.h>

/* _putchar function */
int _putchar(char c);

/* function that prints a name */
void print_name(char *name, void (*f)(char *));

#endif
