#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * init_dog - function that initializes a variable of type
 * struct dog
 * @d: pointer to struct dog to be initialized
 * @name: pointer to name string
 * @age: 
 * @owner: pointer to owner string
 * Return: Nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
