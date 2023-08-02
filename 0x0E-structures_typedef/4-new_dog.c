#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
 * new_dog - function that creates a new dog struct
 * @name: pointer to string arg
 * @age: float arg
 * @owner: pointer to string arg
 * Return: On success, a pointer to new dog
 * On failure, NULL is returned.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new = (dog_t *)malloc(sizeof(dog_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->name = strdup(name);
	if (new->name == NULL)
	{
		free(new);
	}
	new->owner = strdup(owner);
	if (new->owner == NULL)
	{
		free(new->name);
		free(new);
	}
	new->age = age;
	return (new);
}
