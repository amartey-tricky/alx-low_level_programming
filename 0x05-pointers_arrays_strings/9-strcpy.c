#include "main.h"

/**
 * _strcpy - copies the string pointed to by src to dest
 * @dest: destination of string to be copied
 * @src: source of the string to be copied
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';

	return (dest);
}
