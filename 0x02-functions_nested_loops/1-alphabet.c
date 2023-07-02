#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - a function that prints the alphabet in lowercase
 * Return: Nothing.
 */
void print_alphabet(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		_putchar(alphabet);
		alphabet++;
	}
	_putchar('\n');
}
