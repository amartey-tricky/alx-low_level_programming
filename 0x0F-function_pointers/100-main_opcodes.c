#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char **argv[])
{
	int bytes, index;
	char (*buffer)(int, char **) = main;
	unsigned char opcode;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (index = 0; index < bytes; index++)
	{
		opcode = (unsigned char *)buffer;
		printf("%.2x\n", opcode);

		if (index == bytes - 1)
			continue;

		printf(" ");

		buffer++;
	}

	printf("\n");

	return (0);
}
