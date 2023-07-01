#include <stdio.h>
/**
 * main - entry of program
 * Description: Prints all single digit numbers
 * Of base 10 starting from 0
 * Return: Always 0.
 */
int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar('0' + num);
		num++;
	}
	putchar('\n');
	return (0);
}
