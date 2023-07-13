#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates an array of characters
 * @c: Array is initialized with the character c over each element
 * @size: the size of the memory to print
 * @buffer: the address of memory to print
 * @i: the number of elements in the array
 * Return: Nothing.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *buffer;

	if (size == 0)
	{
		return (NULL);
	}
	buffer = malloc(sizeof(char) * size);
	if (buffer != NULL)
	{
		for (i = 0; i < size; i++)
		{
			buffer[i] = c;
		}
	}
	return (buffer);
}
