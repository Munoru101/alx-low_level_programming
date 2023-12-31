#include <stdio.h>
#include "main.h"
/**
 * print_chessboard - function that prints the chessboard
 * @a: 2D array representing the chessboard is a parameter to the function
 * Return: nothing.
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
