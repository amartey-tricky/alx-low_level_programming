# include "main.h"

/**
 * _abs - Function to print the absolute value of an integer
 * @n: Integer to be printed
 *
 * Return: integer absolute value
 */
int _abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}
