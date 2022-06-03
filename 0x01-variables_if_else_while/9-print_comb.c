#include <stdio.h>
#include <stdlib.h>

/**
 * main - print all posible combinations of a single digit
 *        followed by "," and a space
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num = 48;

	while (num < 58)
	{
		putchar(num);
		num++;

		if (num < 58)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
