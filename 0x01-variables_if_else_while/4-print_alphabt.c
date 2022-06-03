#include <stdlib.h>
#include <stdio.h>

/**
 * main - Print the alphabet in lowercase except for q and e
 *        followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		if (alphabet != 'q' && alphabet != 'e')
		{
			putchar(alphabet);
		}
	}
	putchar('\n');

	return (0);
}
