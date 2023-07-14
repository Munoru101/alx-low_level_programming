#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - function that creates an array of integers
 * @min: integer parameter
 * @max: integer parameter
 * Return: Always 0.
 */
int *array_range(int min, int max)
{
	int *array;
	int size, i;

	if (min > max)
	{
		return (NULL);
	}
	size = max - min + 1;
	array = malloc(sizeof(int) * size);
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = min++;
	}
	return(array);
}
