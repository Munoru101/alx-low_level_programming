#include <stdio.h>
/**
 * _pow_recursion - function that returns the value of x raised to the power of y
 * @x and @y: argument integers
 * Return: -1 if y < 0
 * Return: Always 0 otherwise
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
