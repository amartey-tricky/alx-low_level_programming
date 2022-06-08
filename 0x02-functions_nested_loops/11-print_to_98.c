#include "main.h"

/**
 * print_to_98 - Function that prints all natural numbers from from n to 98
 * @n: The number to start printing from
 *
 * Return: void
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		printf("%d, ", n);
		print_to_98(n + 1);
	}

	else if (n == 98)
	{
		printf("%d\n", n);
	}

	else
	{
		printf("%d, ", n);
		print_to_98(n - 1);
	}
}
