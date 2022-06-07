#include "main.h"

void print_alphabet_x10(void)
{
	int row;
	char alpha = 'a';

	while (alpha <= 'z')
	{
		for (row = 1; row <= 10; row++)
		{
			_putchar(alpha);
		}
		alpha++;
	}
	_putchar('\n');
	
}
