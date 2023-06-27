#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: pointer to the string to be reversed
 * @n: length of string
 * Return: nothing.
 */
void rev_string(char *s)

{
	int n = strlen(s);
	int *i, *j;
	
	i = &n;
	j = &n-1;

	for(i = 0, j = n -1; i < j; i++, j--)
	{
		swap_int([i], [j]);
	}
}	
