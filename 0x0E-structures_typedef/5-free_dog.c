#include "dog.h"

/**
 * free_dog - free a dog
 * @d: pointer to the dog
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
