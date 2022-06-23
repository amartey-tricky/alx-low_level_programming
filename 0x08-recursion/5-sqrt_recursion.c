#include "main.h"

int square_root(int n, int i);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to find the square root of
 *
 * Return: the natural square root of n
 */
int _sqrt_recursion(int n)
{
	return (square_root(n, 1));
}

/**
 * square_root - checks if a number is a square number
 * @n: number to check
 * @i: counter
 *
 * Return: square root of n
 */
int square_root(int n, int i)
{
	if ((i * i) == n)
		return (i);

	else if ((i * i) < n)
		return (square_root(n, i + 1));

	else
		return (-1);
}
