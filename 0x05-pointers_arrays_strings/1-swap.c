#include <stdio.h>

/**
 * swap_int - a function to swap two integers
 */

void swap_int(int *a, int *b)
{
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;	
}
