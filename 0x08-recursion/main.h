#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <unistd.h>

/* _putchar function */
int _putchar(char c);

/* function that prints a string followed by a new line */
void _puts_recursion(char *s);

/* function that prints a string in reverse followed by anew line */
void _print_rev_recursion(char *s);

/* function that returns the length of a string */
int _strlen_recursion(char *s);

/* function that returns the factorial of a given number */
int factorial(int n);

/* function that return the value of x raised to the power of y */
int _pow_recursion(int x, int y);

/* function that returns the natural square root of a number */
int _sqrt_recursion(int n);

#endif
