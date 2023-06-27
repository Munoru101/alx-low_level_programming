#include <stdio.h>
#include "main.h"

/**
 * print_array - a function that prints 
 * @n: elements of array to be printed
 * Return: nothing
 */

void print_array(int *a, int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf("%d, ", a[i]);
		if (i == n-1)
		{
			printf("%d", a[i]);
		}
	}
	printf("\n");
}
