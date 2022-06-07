#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int row = 1;
	char alpha = 'a';

	while (row <= 10)
	{
		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}
		_putchar('\n');
		alpha = 'a';
		row++;
	}
}
