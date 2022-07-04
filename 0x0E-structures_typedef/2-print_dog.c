#include "dog.h"

/**
 * print_dog - print a dog
 * @d: pointer to the dog
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		printf("Name: (nil)\n");
		printf("Age: (nil)\n");
		printf("Owner: (nil)\n");
	}

	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
