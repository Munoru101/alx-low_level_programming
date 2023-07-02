#include <stdio.h>
/**
 * main - entry point of the program
 * Description: prints all possible different combinations of three digits
 * The three digits are different, only smallest combo printed
 * 012,120,102,021,201,210 are considered same combination
 * Numbers printed in ascending order
 * @digit1, @digit2, @digit3: variables representing the three digits
 * Return: Always 0.
 */
int main(void)
{
	int digit1, digit2, digit3;

	for (digit1 = 0; digit1 <= 7; digit1++)
	{
		for (digit2 = digit1 + 1; digit2 <= 8; digit2++)
		{
			for (digit3 = digit2 + 1; digit3 <= 9; digit3++)
			{
				putchar('0' + digit1);
				putchar('0' + digit2);
				putchar('0' + digit3);
				if (digit1 != 7 || digit2 != 8 || digit3 != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
