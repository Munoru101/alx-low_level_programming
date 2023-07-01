#include <stdio.h>
/**
 * main - entry to the program
 * Description: prints all possible combinations of single-digit numbers
 * Numbers separated by commas and spaces
 * Return: 0.
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar('0' + num);
		if (num < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
