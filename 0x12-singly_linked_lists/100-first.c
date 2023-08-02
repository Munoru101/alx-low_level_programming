#include <stdio.h>
/**
 * print_before_main - function that auto prints a str before
 * the main function is called
 * Return: Nothing
 */
void print_before_main() __attribute__((constructor));
void print_before_main()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
