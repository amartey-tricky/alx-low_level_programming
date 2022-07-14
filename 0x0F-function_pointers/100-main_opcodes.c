#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int bytes, index;
	int (*f)(int, char *);

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
}
