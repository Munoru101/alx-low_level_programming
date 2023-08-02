#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * init_dog - function that initializes a var of type struct
 * @d: pointer to struct dog to be initialized
 * @name: pointer to name string
 * @age: pointer to float arg 
 * @owner: pointer char string arg
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
