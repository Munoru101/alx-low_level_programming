#include <stdio.h>
#include "main.h"

/**
 * puts2 - is a function that prints every other
 * character of a string
 * @str: string
 * starting with the first character, followed by
 * a new line
 * Return: nothing
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
