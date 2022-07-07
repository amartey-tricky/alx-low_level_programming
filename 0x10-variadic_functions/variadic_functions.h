#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

/* function that returns the sum of all paramters */
int sum_them_all(const unsigned int n, ...);

/* function that prints numbers, followed by a new line */
void print_numbers(const char *separator, const unsigned int n, ...);

/* function that prints strings followed by a new line */
void print_strings(const char *separator, const unsigned int n, ...);

#endif
