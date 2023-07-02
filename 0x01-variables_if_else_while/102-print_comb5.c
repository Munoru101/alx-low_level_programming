#include <stdio.h>
/**
 * main - entry point of the program
 * Description: prints all possible combinations of two two-digit numbers
 * Numbers range from 0 to 99, all printed with two digits
 * The two numbers separated by space
 * Combination printed in ascending order
 * Combinations separated by comma, followed by space
 * @num1 and @num2: variables representing the two two-digit numbers
 * Return: Alaways 0.
 */
int main(void)
{
	int num1, num2;

	for (num1 = 0; num1 <= 99; num1++)
	{
		for (num2 = 0; num2 <= 99; num2++)
		{
			if (num1 <= num2)
			{
				putchar('0' + (num1 / 10));
				putchar('0' + (num1 % 10));
				putchar(' ');
				putchar('0' + (num2 / 10));
				putchar('0' + (num2 % 10));
				if (num1 != 99 || num2 != 99)
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
