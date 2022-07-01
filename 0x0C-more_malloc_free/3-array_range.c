#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: minimum value of the array
 * @max: maximum value of the array
 *
 * Return: pointer to the array
 */
int *array_range(int min, int max)
{
	int *array;
	int i;

	if (min > max)
		return (NULL);
	array = malloc_checked(sizeof(int) * (max - min + 1));
	if (array == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
		array[i - min] = i;
	return (array);
}
