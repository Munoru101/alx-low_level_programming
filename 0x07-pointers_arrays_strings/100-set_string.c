#include <stdio.h>
/**
 * set_string - function that sets the value of a pointer to a character
 * @s: double pointer
 * @to: pointer
 * Return: nothing.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
