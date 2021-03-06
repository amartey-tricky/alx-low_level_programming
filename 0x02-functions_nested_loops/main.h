#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <ctype.h>

/* Add _putchar function */
int _putchar(char c);

/* Function to print alphabets in lowercase */
void print_alphabet(void);

/* Function to print alphabets in lowercase 10 times */
void print_alphabet_x10(void);

/* Function to check if a character is lowercase */
int _islower(int c);

/* Function to check if a character is an alphabet */
int _isalpha(int c);

/* Function to print the sign of a number */
int print_sign(int n);

/* Function to print the absolute value of an integer */
int _abs(int);

/* Function that prints the last digit of a number */
int print_last_digit(int);

/* Function that prints every minute of the day */
void jack_bauer(void);

/* Function that prints the nine times tables */
void times_table(void);

/* Function that adds two integers and prints the results */
int add(int, int);

/* Function to print all natural numbers from from n to 98 */
void print_to_98(int n);

#endif
