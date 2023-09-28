#include "main.h"
int prime_check(int n, int x);
int is_prime_number(int n);
/**
 * prime_check - checks if a number is divisible by a
 * smaller natural number
 * @n: the number under check
 * @x: the divisor
 * Return: 0 if divisible that is, not prime
 * 1 if not divisible that is, prime.
 */
int prime_check(int n, int x)
{
	if (n % x == 0)
		return (0);
	if (n / 2 == x)
		return (1);
	return (prime_check(n, x + 1));
}
/**
 * is_prime_number - function to return identification of primes
 * @n: input integer under check
 * Return: 0 if divisible, that is, not prime
 * 1 if not divisible, that is, prime.
 */
int is_prime_number(int n)
{
	int x = 2;

	if (n <= 1)
		return (0);
	if (n >= 2 && n <= 3)
		return (1);
	return (prime_check(n, x));
}
