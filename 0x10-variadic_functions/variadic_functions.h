#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

/**
 * struct print_functions - struct with functions to print
 * @symbol: symbol to print
 * @f: function to print
 */
typedef struct print_functions
{
	char *symbol;
	void (*f)();
} print_functions_t;

/* function that returns the sum of all paramters */
int sum_them_all(const unsigned int n, ...);

/* function that prints numbers, followed by a new line */
void print_numbers(const char *separator, const unsigned int n, ...);

/* function that prints strings followed by a new line */
void print_strings(const char *separator, const unsigned int n, ...);

/* function that prints anything, followed by a new line */
void print_all(const char * const format, ...);

#endif
