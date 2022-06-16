#include "main.h"

/**
 * _strncpy - copies the string pointed to by src to dst
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 * @n: number of bytes to copy
 *
 * Return: pointer to the destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
