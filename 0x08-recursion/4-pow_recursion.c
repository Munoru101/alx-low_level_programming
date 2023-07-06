#include <stdio.h>
/**
 * _pow_recursion - function that returns the value of x raised to y
 * @x: argument integers
 * @y: argument integer
 * Return: Always 0 and erro if y is less than 0.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
