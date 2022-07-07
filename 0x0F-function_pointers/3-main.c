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
	int a, b;
	int (*f)(int, int);
	char op;

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	op = *(argv[2]);
	a = atoi(argv[1]);
	b = atoi(argv[3]);

	f = get_op_func(&op);

	if (f == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		return (98);
	}

	printf("%d\n", f(a, b));

	return (0);
}
