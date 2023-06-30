#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strncat is a function that concatenates
 * two strings, and is similar to strcat except
 * it will use at most
 * @n: bytes from src
 * @dest: pointer to destination string
 * @src: pointer to source string
 */

char *_strncat(char *dest, char *src, int n)
{
	char *p = dest;
	while (*p != '\0')
	{
		p++;	
	}
	while (*src != '\0' && n > 0)/* copy charcaters from src to dest up to n bytes */
	{
		*p = *src;
		p++;
		src++;
		n--;
	}
	*p = ('\0');/*add the terminating null byte */
	return (dest);
}
