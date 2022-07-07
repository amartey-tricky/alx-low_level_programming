#include "3-calc.h"

/**
 * get_op_func - returns the function associated with `op`
 * @s: string containing the operator
 *
 * Return: pointer to function associated with `op`
 */
int (*get_op_func(char *s))(int, int)
{
	int i;

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
		};

	for (i = 0; ops[i].op != NULL; i++)
	{
		if (*(ops[i].op) == *s)
		{
			return (ops[i].f);
		}
	}

	return (NULL);
}
