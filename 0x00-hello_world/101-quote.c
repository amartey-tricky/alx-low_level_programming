#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

/**
 * main - Print exactly "and that piece of art is useful\" - Dora Korpar,\
 *         2015-10-19" to stderr
 *
 * Return: Always 1
 */
int main(void)
{
	char *quote = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fwrite(quote, sizeof(char), strlen(quote), stderr);

	return (1);
}
