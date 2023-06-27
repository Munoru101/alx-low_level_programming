#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_rev - function to print string in reverse
 * followed by a new line
 * @str: the variable to be reversed
 * Return: nothing.
 */

void print_rev(char *str)
{
	int n = _strlen(str);
	
	for (int i = n-1; i>=0; i--)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
