#include <stdlib.h>
#include <stdio.h>

/**
 * main - print all the numbers of base 16 in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char num;
	char alphabet = 'a';

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}

	while (alphabet <= 'f')
	{
		putchar(alphabet);
		alphabet++;
	}

	putchar('\n');

	return (0);
}
