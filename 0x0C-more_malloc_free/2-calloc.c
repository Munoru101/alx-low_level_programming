#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - function that returns memory for an array
 * using malloc
 * @nmemb: number of elements in the array
 * @size: in bytes of each element
 * Return: On success, Pointer to allocated memory
 * Else, return NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;

	if (nmemb == 0 || size == 0)
		return (NULL);
	mem = malloc(nmemb * size);
	if (mem == NULL)
		return (NULL);
	else
		memset(mem, 0, nmemb * size);
	return (mem);
}
