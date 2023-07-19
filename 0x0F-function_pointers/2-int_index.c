#include <stdio.h>
#include <stdlib.h>
/**
 * int_index - function that searches for an integer
 * @array: array to search
 * @size: number of elements in the array
 * @cmp: pointer to the function to be used to
 * compare values
 * Return: An integer or -1 if none.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}
	if (cmp == NULL && array == NULL)
	{
		exit(EXIT_FAILURE);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
