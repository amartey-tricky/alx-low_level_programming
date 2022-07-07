#include "variadic_functions.h"

/**
 * sum_them_all - Sums all the arguments passed to it
 * @n: Number of arguments
 * @...: The arguments to be summed
 *
 * Return: The sum of all the arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int sum = 0;
	unsigned int i = 0;

	if (n == 0)
		return (0);

	va_start(args, n);

	for (i = 0; i < n; i++)
		sum += va_arg(args, int);

	va_end(args);

	return (sum);
}
