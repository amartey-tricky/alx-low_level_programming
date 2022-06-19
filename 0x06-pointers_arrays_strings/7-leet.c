#include "main.h"

/**
 * leet - encodes string into 1337
 * @str: string to encode
 *
 * Return: pointer to encoded string
 */
char *leet(char *str)
{
	int i, j;

	char mozart[] = {'A', 'E', 'O', 'T', 'L'};

	i = 0;
	while (str[i])
	{
		for (j = 0; j < 5; j++)
		{
			if (str[i] == mozart[j] || str[i] - 32 == mozart[j])
				str[i] = j + '0';
		}
		i++;
	}

	return (str);
}
