#include "main.h"
/**
 * factorial - function that returns factorial of a number
 * @n: the number argument to the function
 * Return: the factorial of n.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (1);
	else
		return (n * factorial(n - 1));
}
