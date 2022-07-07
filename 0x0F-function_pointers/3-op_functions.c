#include "3-calc.h"

/**
 * op_add - returns the sum of `a` and `b`
 * @a: first number
 * @b: second number
 *
 * Return: sum of `a` and `b`
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns the difference of `a` and `b`
 * @a: first number
 * @b: second number
 *
 * Return: difference of `a` and `b`
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns the product of `a` and `b`
 * @a: first number
 * @b: second number
 *
 * Return: product of `a` and `b`
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns the quotient of `a` and `b`
 * @a: first number
 * @b: second number
 *
 * Return: quotient of `a` and `b`
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		return (98);
	}

	return (a / b);
}

/**
 * op_mod - returns the modulus of `a` and `b`
 * @a: first number
 * @b: second number
 *
 * Return: modulus of `a` and `b`
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		return (98);
	}

	return (a % b);
}
