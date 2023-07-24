#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - function that prints numbers
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 * Return: Nothing.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	unsigned int num;
	va_list args;

	for (i = 0; i < n; i++)
	{
		num = va_arg(args, int);
		printf("%d", num);
	}
	if (separator != NULL && i < n - 1)
	{
		printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
