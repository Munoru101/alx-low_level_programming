#include "function_pointers.h"
/**
 * array_iterator - executes a function given as
 * a parameter on each element of an array
 * @array: to go through
 * @size: of the array
 * @action: pointer to function which is the arg
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t index;

	if (array == NULL || action == NULL)
		return;
	for (index = 0; index < size; index++)
	{
		action(array[index]);
	}
}
