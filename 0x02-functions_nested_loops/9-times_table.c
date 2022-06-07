#include "main.h"

/**
 * times_table - Function that prints the nine times tables
 *
 * Return: void
 */
void times_table(void)
{
	int product, row, column;

	for (column = 0; column < 10; column++)
	{
		for (row = 0; row < 10; row++)
		{
			product = column * row;
			if (product < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(product + '0');
			}

			else if (product < 100)
			{
				_putchar(' ');
				_putchar(product / 10 + '0');
				_putchar(product % 10 + '0');
			}

			else
			{
				_putchar(product / 100 + '0');
				_putchar(product / 10 % 10 + '0');
				_putchar(product % 10 + '0');
			}

			if (row < 9)
				_putchar(',');

			else
				_putchar('\n');
		}
	}
}
