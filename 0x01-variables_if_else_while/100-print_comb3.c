#include <stdio.h>
/**
 * main - entry point to the program
 * Description: prints all possible different combinations of two digits
 * @digit1 and @digit2: variable representing the two digits
 * The two digits are different and only the smallest combination is printed
 * Numbers in ascending order, and 01 and 10 considered same combination
 * Return: Always 0.
 */
int main(void)
{
	int digit1, digit2;

	for (digit1 = 0; digit1 <= 8; digit1++)
	{
		for (digit2 = digit1 + 1; digit2<= 9; digit2++)
		{
			putchar('0' + digit1);
			putchar('0' + digit2);
			if (digit1 != 8 || digit2 != 9)
			{
				putchar(',');
				putchar(' ');
			}

		}
	}
	putchar('\n');
	return (0);
}
