#include <stdio.h>
/**
 * main - entry to the program
 * Description: prints all single digit number of base 10
 * Starting from 0
 * Return: alway 0.
 */
int main(void)
{
	int num = 0;

	while (num <= 9)
	{
		putchar('0' + num);
		num++;
	}
	putchar('\n');
	return (0);
}
