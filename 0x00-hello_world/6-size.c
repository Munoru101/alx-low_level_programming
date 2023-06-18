#include <stdio.h>
/**
 * main - entry point
 * sizeof evaluates the size of a variable
 * Return: Always 0
 */
int main(void)
{
	printf("Size of a char: %zu byte(s)\n", sizeof(char));
	printf("Size of an int: %zu bytes(S)\n", sizeof(int));
	printf("Size of a long int: %zu byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(long long int));
	printf("Size of a float: %zu byte(S)\n", sizeof(float));
	return (0);
}
