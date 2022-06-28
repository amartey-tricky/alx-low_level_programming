#include "main.h"

/**
 * strdup - Duplicates a string
 * @str: String to duplicate
 *
 * Return: Pointer to duplicated string
 */
char *_strdup(char *str)
{
    char *dup;
    int i;

    if (str == NULL)
        return (NULL);

    dup = malloc(sizeof(char) * (strlen(str) + 1));

    if (dup == NULL)
        return (NULL);

    for (i = 0; str[i] != '\0'; i++)
        dup[i] = str[i];

    dup[i] = '\0';

    return (dup);
}
