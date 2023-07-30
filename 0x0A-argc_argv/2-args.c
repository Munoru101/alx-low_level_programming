#include <stdio.h>
/**
 * main - program that prints all args it receives
 * @argc: count of args supplied
 * @argv: arrays of pointers to the strings which are those args
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
