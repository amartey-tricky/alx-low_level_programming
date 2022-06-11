#include "main.h"

/**
 * more_numbers - prints 0-14 10 times
 *
 * Return: void
 */
void more_numbers(void)
{
	int row, column;

	for (column = 0; column < 10; column++)
	{
		for (row = 0; row < 15; row++)
		{
			if (row > 9)
			{
				_putchar('1');
			}
			_putchar(row % 10 + '0');
		}
		_putchar('\n');
	}
}
