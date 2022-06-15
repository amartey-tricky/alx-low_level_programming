#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <unistd.h>

/* _putchar function */
int _putchar(char c);

/* function that takes a pointer to an int and updates the value to 98 */
void reset_to_98(int *n);

/* function that swaps the value of two integers */
void swap_int(int *a, int *b);

/* function that returns the length of a string */
int _strlen(char *s);

/* function that prints a string */
void _puts(char *str);

/* function that prints a string in reverse */
void print_rev(char *s);

/* function that reverses a string */
void rev_string(char *s);

/* function that prints every other character of a string */
void puts2(char *str);

/* function that prints half of a string */
void puts_half(char *str);

#endif