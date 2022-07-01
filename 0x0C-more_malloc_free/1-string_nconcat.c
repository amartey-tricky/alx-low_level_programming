#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes to concatenate
 *
 * Return: pointer to the concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int i, j, k;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	concat = malloc_checked(n + 1);

	if (concat == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		concat[i] = s1[i];

	for (j = 0; s2[j] != '\0' && j < n; j++)
		concat[i + j] = s2[j];

	concat[i + j] = '\0';
	return (concat);

	for (k = 0; s1[k] != '\0' && k < n; k++)
		concat[k] = s1[k];

	for (k = 0; s2[k] != '\0' && k < n; k++)
		concat[k] = s2[k];

	concat[k] = '\0';
	return (concat);
}
