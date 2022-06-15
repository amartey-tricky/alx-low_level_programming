#include "main.h"

int _strlen(char *s);

/**
 * print_rev - prints a string in reverse
 * @s: string to print in reverse
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i;

	i = _strlen(s) - 1;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}

/**
 * _strlen - returns the length of a string
 * @s: string to be checked
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}

