#include <stdio.h>

/**
 * main - print the alphabet in reverse and lowercase followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabet = 'z';

	while (alphabet >= 'a')
	{
		putchar(alphabet);
		alphabet--;
	}
	putchar('\n');

	return (0);
}
