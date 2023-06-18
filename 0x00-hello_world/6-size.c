#include <stdio.h>
/**
 * main - entry point
 * sizeof evaluates the size of a variable
 * Return: Always 0
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;
	printf("Size of a char: %zu byte(s)\n", sizeof(a));
	printf("Size of an int: %zu bytes(S)\n", sizeof(b));
	printf("Size of a long int: %zu byte(s)\n", sizeof(c));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(d));
	printf("Size of a float: %zu byte(S)\n", sizeof(e));
	return (0);
}
