#include "main.h"

/**
 * _calloc - allocates memory for an array of elements
 * @nmemb: number of elements
 * @size: size of each element
 *
 * Return: pointer to allocated memory or NULL if error
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	memset(ptr, 0, nmemb * size);
	return (ptr);
}
