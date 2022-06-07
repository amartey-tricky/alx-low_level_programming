#include "main.h"

/**
 * times_table - Function that prints the nine times tables
 *
 * Return: void
 */
void times_table(void)
{
	int row, column;

	for (row = 0; row <= 9; row++)
	{
		for (column = 0; column <= 9; column++)
		{
			_putchar(row * column + '0');
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
