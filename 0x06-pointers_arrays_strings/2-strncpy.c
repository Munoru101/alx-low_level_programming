#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strncpy - copies a string with a specified length
 * and works exactly like strncpy()
 * @dest: destination string where copied string will be stored
 * @src: the source string to be copied
 * @n: maximum number of characters to be copied
 * Return: Pointer to destination string
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
