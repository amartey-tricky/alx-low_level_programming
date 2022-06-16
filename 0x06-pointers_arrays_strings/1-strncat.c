#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: string to be concatenated to
 * @src: string to be concatenated
 * @n: number of bytes to be concatenated
 *
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
