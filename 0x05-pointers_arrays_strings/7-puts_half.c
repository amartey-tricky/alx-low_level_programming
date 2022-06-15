#include "main.h"

int _strlen(char *s);

/**
 * puts_half - prints half of a string
 * @str: string to be printed
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i, len;

	len = _strlen(str);

	if (len % 2 == 0)
	{
		for (i = len / 2; i < len; i++)
			_putchar(str[i]);
	}

	else
	{
		for (i = len / 2 + 1; i < len; i++)
			_putchar(str[i]);
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
