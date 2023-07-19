#include <stdio.h>
#include <ctype.h>
#include "function_pointers.h"
/**
 * print_name - function that prints a name
 * Description: It calls the function pointed to by f
 * and passes the name as argument
 * @name: argument to the function
 * @f: function pointer
 * Return: Nothing.
 */
void print_name_as_is(char *name)
{
	while (*name != '\0')
	{
		_putchar(*name);
		name++;
	}
	_putchar('\n');
}
void print_name_uppercase(char *name)
{
	while (*name != '\0')
	{
		_putchar(toupper(*name));
		name++;
	}
	_putchar('\n');
}
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
