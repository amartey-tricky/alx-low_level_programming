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
		printf("Error: three arguments required\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	op = argv[2];

	res = get_op_func(op)(a, b);

	printf("%d\n", res);

	return (0);
}
