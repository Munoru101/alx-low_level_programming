#include <stdio.h>
/**
 * main - entry point
 * sizeof evaluates the size of a variable
 * Return: Always 0
 */
int main()
{
	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("Size of an int: %d bytes(S)\n", sizeof(int));
	printf("Size of a long int: %d byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
	printf("Size of a float: %d byte(S)\n", sizeof(float));
	return 0;
}
