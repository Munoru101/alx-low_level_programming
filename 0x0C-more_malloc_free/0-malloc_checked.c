#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - function that allocates memory using malloc
 * @b: size parameter
 * Return: Always 0.
 */ 
void *malloc_checked(unsigned int b)
{
	unsigned int *p;

	p = malloc(b);
	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
