#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <ctype.h>

/* _putchar function */
int _putchar(char c);

/* Function that checks for uppercase characters */
int _isupper(int c);

/* Function that checks for a digit */
int _isdigit(int c);

/* Function that multiplies two integers */
int mul(int a, int b);

/* Function that prints two numbers from 0-9 */
void print_numbers(void);

/* Function that prints numbers from 0-9 excluding 2 and 4 */
void print_most_numbers(void);

/* Function that prints 0-14 10 times */
void more_numbers(void);

/* Functions that draws a straight line in terminal */
void print_line(int n);

/* Function that draws a diagonal line in terminal */
void print_diagonal(int n);

/* Function to print a square */
void print_square(int size);

#endif