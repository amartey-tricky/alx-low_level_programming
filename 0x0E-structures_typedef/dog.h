#ifndef DOG_H
#define DOG_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

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

/* Function that print a dog */
void print_dog(struct dog *d);

/* function that creates a new dog */
dog_t *new_dog(char *name, float age, char *owner);

/* function that free dogs */
void free_dog(dog_t *d);

#endif
