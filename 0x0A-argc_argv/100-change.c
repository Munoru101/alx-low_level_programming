#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that prints the minimum number of
 * coins to make change for an amount of money
 * @argc: count of the args supplied to the program
 * @argv: array of pointers to the strings which are those args
 * Return: on success, 0.
 * On failure, return 1 and error message is set
 */
int main(int argc, char *argv[])
{
	int cents, coins25, coins10, coins5, coins2, coins;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	coins25 = cents / 25;
	cents %= 25;
	coins10 = cents / 10;
	cents %= 10;
	coins5 = cents / 5;
	cents %= 5;
	coins2 = cents / 2;
	cents %= 2;
	coins = coins25 + coins10 + coins5 + coins2 + cents;
	printf("%d\n", coins);
	return (0);
}
