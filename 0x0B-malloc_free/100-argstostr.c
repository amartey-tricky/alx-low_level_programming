#include "main.h"

/**
 * argstostr - concatenates all arguments passed to the program
 * @ac: number of arguments
 * @av: array of arguments
 *
 * Return: pointer to a newly allocated space in memory
 */
char *argstostr(int ac, char **av)
{
	int i, j, k, l, m, n;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			if (av[i][j] == '\0')
				break;
		}
	}

	str = create_array(j + 1, '\0');
	for (i = 0; i < ac; i++)

	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[k] = av[i][j];
			k++;
		}
	}

	return (str);
}
