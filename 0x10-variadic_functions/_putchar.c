#include <unistd.h>
/**
 * _pucthar - writes the character c to stdout
 * @c: The character to print
 * Return: on success, 1
 * Else, -1 is returned and errno set
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
