#include "main.h"
#include <stdlib.h>
/**
 * array_rabge - function that creates an array of ints
 * @min: the first int in the array
 * @max: the last int in the array
 * Return: On success, a pointer to the new array
 * Else, NULL if min>max or malloc fails
 */
int *array_range(int min, int max)
{
	int *mem;
	int i;

	if (min > max)
		return (NULL);
	mem = malloc(sizeof(int) * ((max - min) + 1));
	if (mem == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
		mem[i] = min++;
	return (mem);
}
