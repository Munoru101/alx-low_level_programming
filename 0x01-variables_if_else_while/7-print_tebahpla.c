#include <stdio.h>
/**
 * main - entry to the program
 * Description: prints the lowercase alphabet in reverse
 * Return: Always 0.
 */
int main(void)
{
	char tebahpla = 'z';

	while (tebahpla >= 'a')
	{
		putchar(tebahpla);
		tebahpla--;
	}
	putchar('\n');
	return (0);
}
