#include <stdio.h>

/**
 * reverse_array -reverses contents of an array of integers
 * @a: an array of integers
 * @n: the number of elements to swap
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int tmp;
	int i;
	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = tmp;
	}
}
