#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - function that allocates memory using malloc
 * @b: the size of memory to be allocated
 * Return: pointer to the allocated memory
 * Else, terminate with a status value of 98
 */
void *malloc_checked(unsigned int b)
{
	void *memsize;

	memsize = malloc(b);
	if (memsize == NULL)
		exit(98);
	return (memsize);
}
