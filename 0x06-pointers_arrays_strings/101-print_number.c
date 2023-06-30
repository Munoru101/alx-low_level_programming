#include <stdio.h>
#include "main.h"
/**
 * print_number -function that prints an integer
 * uses _putchar function to print
 * return: nothing
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10)
	{
		print_number(n / 10);
	}
	_putchar('0' + (n%10));
}
