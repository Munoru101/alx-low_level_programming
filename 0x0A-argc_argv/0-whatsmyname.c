#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * main - program that prints its name
 * @argc: count of the args supplied to the program
 * @argv: array of pointers to the strings which are those args 
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i;
	char *name = argv[0];
	(void)argc;

	for (i = 0; name[i] != '\0'; i++)
	{
		_putchar(name[i]);
	}
	_putchar('\n');
	return (0);
}
