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

#endif
