#include <stdio.h>
#include "main.h"

/**
 * main - dereferencing pointers
 *  
 *  Return: Always 0.
 */
int main(void)
{
	int n;
	int *p;
	p = &n;
	*p = 98;
	return (0);
}
