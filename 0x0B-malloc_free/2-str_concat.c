#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - function that concatenates two strings
 * @s1: pointer to destination string
 * @s2: pointer to source string
 * Return: Always 0.
 */
char *str_concat(char *s1, char *s2)
{
	int size1, size2;
	char *s;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	size1 = strlen(s1);
	size2 = strlen(s2);
	s = malloc(sizeof(char) * (size1 + size2 + 1));
	if (s == NULL)
	{
		return (NULL);
	}
	strcpy(s, s1);
	strcat(s, s2);
	return (s);
}
