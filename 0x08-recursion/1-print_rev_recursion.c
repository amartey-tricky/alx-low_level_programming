#include "main.h"

/**
 * _print_rev_recursion - print a string in reverse followed by a new line
 * @s: pointer to string to be reversed
 *
 * Return: reversed string
 */
void _print_rev_recursion(char *s)
{
	if (*s > '\0')
	{
		_print_rev_recursion(s + 1);

		_putchar(*s);
	}
}
