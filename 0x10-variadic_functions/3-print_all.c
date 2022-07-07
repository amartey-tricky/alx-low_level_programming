#include "variadic_functions.h"

void print_char(va_list args);
void print_int(va_list args);
void print_float(va_list args);
void print_string(va_list args);

/**
 * print_char - prints a char
 * @args: va_list
 *
 * Return: void
 */
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * print_int - prints an int
 * @args: va_list
 *
 * Return: void
 */
void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_float - prints a float
 * @args: va_list
 *
 * Return: void
 */
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * print_string - prints a string
 * @args: va_list
 *
 * Return: void
 */
void print_string(va_list args)
{
	char *str = va_arg(args, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}

/**
 * print_all - prints anything, followed by a new line
 * @format: string to print
 * @...: strings to print
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *separator = "";
	print_functions_t print_functions[] = {
		{"c", &print_char},
		{"i", &print_int},
		{"f", &print_float},
		{"s", &print_string},
		{NULL, NULL}
	};

	va_start(args, format);
	while (format && format[i])
	{
		unsigned int j = 0;

		while (print_functions[j].symbol != NULL)
		{
			if (format[i] == *print_functions[j].symbol)
			{
				printf("%s", separator);
				print_functions[j].f(args);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");

	va_end(args);
}
