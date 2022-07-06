#include "3-calc.h"

/**
 * main - Entry point
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	char *op;
	int a, b, res;

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	op = argv[2];

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		return (98);
	}

	/* divising by 0 error */
	if ((op[0] == '/' && b == 0) || (op[0] == '%' && b == 0))
	{
		printf("Error\n");
		return (98);
	}

	res = get_op_func(op)(a, b);

	printf("%d\n", res);

	return (0);
}
