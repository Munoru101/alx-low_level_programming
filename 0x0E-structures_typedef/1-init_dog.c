#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
 * init_dog - function that initializes a variable of type
 * struct dog
 * @d: pointer to struct dog to be initialized
 * @name: pointer to name string
 * @age: 
 * @owner: pointer to ownerr string
 * Return: Nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = malloc(strlen(name) + 1);
	d->owner = malloc(strlen(owner) + 1);
	strcpy(d->name, name);
	strcpy(d->owner, owner);
	d->age = age;
}
