#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
/**
 * main - function that adds positive numbers
 * @argc: count of arguments supplied
 * @argv: array of pointers to the strings which are those args
 * Return: On success 0.
 * On failure, return 1 and error message set
 */
int main(int argc, char *argv[])
{
	int i, j, num, sum;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		num = atoi(argv[i]);
		sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
