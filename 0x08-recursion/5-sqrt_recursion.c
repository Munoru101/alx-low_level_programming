#include "main.h"
int _sqrt(int n, int x);
int _sqrt_recursion(int n);
/**
 * _sqrt - finds natural square root of number n
 * @n: the number to be squarerooted
 * @x: the root of n
 * Return: x if n has natural square root
 * -1 if n has no natural square root
 */
int _sqrt(int n, int x)
{
	if ((x * x) == n)
		return (x);
	if ((x * x) > n)
		return (-1);
	return (_sqrt(n, x + 1));
}
/**
 * _sqrt_recursion - returns the natural root of a number
 * @n: the number to determine its square root
 * Return: the root if n has a natural square root
 * -1 if n has no natural square root
 */
int _sqrt_recursion(int n)
{
	int x = 0;

	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (_sqrt(n, x));
}
