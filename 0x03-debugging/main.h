#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <ctype.h>

/* Function to test if an integer is positive or negative */
void positive_or_negative(int i);

/* print the largest three integers */
int largest_number(int a, int b, int c);

/* print remaining days in the year */
void print_remaining_days(int month, int day, int year);
int convert_day(int month, int day);

#endif