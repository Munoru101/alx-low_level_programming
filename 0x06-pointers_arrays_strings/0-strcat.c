#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strcat function that concatenates two strings
 * @dest: pointer to destination string
 * @src: pointer to source string
 * return: to dest, the resulting string
 */

char *_strcat(char *dest, char *src)
{
	strcat(dest,src);
	return (dest);
}
