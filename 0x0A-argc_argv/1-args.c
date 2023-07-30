#include <stdio.h>
/**
 * main - program that prints the number of args
 * passed to it
 * @argc: count of the args supplied
 * @argv: array of pointers to the strings which are those args
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
