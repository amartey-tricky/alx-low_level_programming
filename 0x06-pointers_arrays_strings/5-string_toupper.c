#include "main.h"

/**
 * string_toupper - changes all strings to uppercase
 * @str: pointer to the string
 *
 * Return: pointer to the string
 */
char *string_toupper(char *str)
{
	int i;

	str = str;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
