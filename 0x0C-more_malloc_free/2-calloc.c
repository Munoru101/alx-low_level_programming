#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - function that allocates memory for an array
 * @nmemb: an array of elements as integer parameter
 * @size: byts of each elemts as integer parameter
 * Return: Nothing.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	i = malloc(nmemb * size);
	if (i == NULL)
	{
		return (NULL);
	}
	memset(i, 0, nmemb * size);
	return (i);
}
