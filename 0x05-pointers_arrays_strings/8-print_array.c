#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 * @a: pointer to array
 * @n: number of elements in array
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
		printf("%d, ", a[i]);

	printf("\n");
}
