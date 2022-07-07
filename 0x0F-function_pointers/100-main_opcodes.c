#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv[])
{
	int i, n;
	int (*p)(int, char **);

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	n = atoi(argv[1]);

	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}

	p = &main;

	for (i = 0; i < n; i++)
	{
		printf("%.2x ", *((unsigned char *)(p + i)));
	}
	printf("\n");

	return (0);
}
