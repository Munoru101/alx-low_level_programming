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
	char *s1s2;
	int i, s1Len = 0, s2Len = 0, j = 0;
	
	if (s1 == NULL || s2 == NULL)
		return ("");
	for (i = 0; s1[i] != '\0'; i++)
	{
		s1Len++;
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		s2Len++;
	}
	s1s2 = malloc(sizeof(char) * (s1Len + s2Len + 1));
	if (s1s2 == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
	{
		s1s2[j++] = s1[i];
	}
	for (i = 0; s2[i] != '\0'; i++)
	{
		s1s2[j++] = s2[i];
	}
	s1s2[s1Len + s2Len + 1] = '\0';
	return (s1s2);
}
