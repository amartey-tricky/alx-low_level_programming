#include "main.h"

/**
 * _strspn - gets the length of a prefix string
 * @s: string to search
 * @accept: string to search for
 *
 * Return: length of prefix string
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, len;

	len = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				len++;
				break;
			}
		}

		if (accept[j] == '\0')
			break;
	}
	
	return (len);
}
