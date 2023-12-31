#include "function_pointers.h"
/**
 * print_name - function that prints a name
 * @name: pointer to char string to print
 * @f: function pointer that takes name as an arg
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
