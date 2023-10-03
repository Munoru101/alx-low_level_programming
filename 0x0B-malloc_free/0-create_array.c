#include <stdlib.h>
#include "main.h"
/**
 * create_array - function that creates an array of chars
 * and initializes it with a specific char
 * @size: size of array
 * @c: the character to initialize
 * Return: NULL if size is 0, or malloc fails
 * Else, return a pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;
	
	if (size == 0)
		return (NULL);
	array = malloc(sizeof(char) * size);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
