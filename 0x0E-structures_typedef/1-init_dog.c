#include <stdlib.h>
#include "dog.h"
/**
 * inint_dog - function that initializes a var
 * of type struct dog
 * @d: pointer to the struct
 * @name: a char variable
 * @age: a float var
 * @owner: a char variable
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
