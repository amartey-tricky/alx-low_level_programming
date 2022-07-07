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

	while (ops[i].op != NULL)
	{
		if (strcmp(ops[i].op, s) == 0)
			return (ops[i].f);
		i++;
	}


	return (NULL);
}
