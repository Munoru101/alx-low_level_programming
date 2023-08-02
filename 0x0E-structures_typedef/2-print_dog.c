#include <stdio.h>
#include "dog.h"
/**
 * print_dog - function that prints the contents of struct dog.
 * @d: pointer to struct dog.
 * Return: Nothing.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
	printf("Age: %6f\n", d->age);
	printf("Owner: %s\n", (d->owner != NULL) ? d->owner: "(nil)");
}
