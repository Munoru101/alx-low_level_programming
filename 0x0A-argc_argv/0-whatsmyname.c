#include <stdio.h>
#include "main.h"
/**
 * program - that prints its name 
 * Return: Always 0.
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	int i;
	char *program_name = argv[0];

	for (i = 0; *program_name != '\0'; i++)
	{
		_putchar(program_name[i]);
	}
	_putchar('\n');
	return (0);
}
