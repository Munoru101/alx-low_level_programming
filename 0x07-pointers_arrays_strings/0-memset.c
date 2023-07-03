#include <stdio.h>
/**
 * _memset - function that fills the first n bytes of the
 * memory pointed to by s
 * with a constant byte b
 * @s: pointer to memory area
 * @b: a constant byte
 * Return: pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
