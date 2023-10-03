#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: pointer to the first string
 * @s2: second string to follow contents of s1
 * Return: Pointer to concatenated string
 * Else, return NULL if memory allocation fails
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	int i, s1Len = 0, s2Len = 0, j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i]; i++)
	{
		s1Len++;
	}
	for (i = 0; s2[i]; i++)
	{
		s2Len++;
	}
	str = malloc(sizeof(char) * (s1Len + s2Len + 1));
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i]; i++)
	{
		str[j++] = s1[i];
	}
	for (i = 0; s2[i]; i++)
	{
		str[j++] = s2[i];
	}
	return (str);
}
