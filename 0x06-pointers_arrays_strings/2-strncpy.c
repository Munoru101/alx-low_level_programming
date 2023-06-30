#include <stdio.h>
#include "main.h"

/**
 * _strncpy is a function that copies a string
 * and works exactly like strncpy()
 * @dest: destination string where src will be stored
 * @src: the source string to be copied
 * @n: number of characters to be copied
 * Return: to dest;
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	char *ptr = dest;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		*ptr = src[i];
		ptr++;
	}
	for ( ; i < n; i++)
	{
		*ptr = '\0';
		ptr++;
	}
	return (dest);
}
