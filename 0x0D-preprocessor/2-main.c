#include <stdlib.h>
#include <stdio.h>

/**
 * main - print the name of the file it was compiled from
 *
 * Return: 0 on success, 1 on error
 */
int main(void)
{
	printf("%s\n", __FILE__);

	return (0);
}
