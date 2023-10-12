#include "function_pointers.h"
/**
 * int_index - fxn that returns the index of
 * the first elements,for which the return
 * of another fxn cmp is not zero
 * @array: to search through
 * @size: of the array
 * @cmp: pointer to a fxn to be used to
 * compare values
 * Return: first int element found
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || size <= 0 || cmp == NULL)
	{
		return (-1);
	}
		for (index = 0; index < size; index++)
	{
		if (cmp(array[index] != 0))
		{
				return (index);
		}
	}
	return (-1);
}
