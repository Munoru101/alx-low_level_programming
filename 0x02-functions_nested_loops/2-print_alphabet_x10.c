#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - function that prints the alphabet 10 times
 * calls the previously written print_alphabet function
 * Return: Nothing
 */
void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		print_alphabet();
		_putchar('\n');
	}
}
