#ifndef DOG_H
#define DOG_H

#include <stdlib.h>
#include <stdio.h>

/**
 * struct dog - struct for dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Description: struct for dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * struct dog_t - create a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Description: create a new dog
 * Return: pointer to the new dog
 */
typedef struct dog_t
{
	char *name;
	float age;
	char *owner;
} dog_t;

/* Function that initialize a variable of struct dog */
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
