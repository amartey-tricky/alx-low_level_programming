#include "main.h"

/**
 * _islower - function to check if a character is lowercase
 * @c: character to be checked
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
