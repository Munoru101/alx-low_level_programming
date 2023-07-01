#include <stdio.h>
/**
 * main - entry function into the program
 * This program prints the alpahbet in lowercase
 * except the letters q and e
 * Return: Always o.
 */
int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		if (alphabet != 'q' && alphabet != 'e')
		{
			putchar(alphabet);
		}
		alphabet++;
	}
	putchar('\n');
	return (0);
}
