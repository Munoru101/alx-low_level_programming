#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - function that concatenates two strings
 * @s1: pointer to destination string
 * @s2: pointer to source string
 * @n: number of bytes from s2 copied
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int size1, size2;
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
	if (n >= size2)
	{
		n = size2;
	}
	s = malloc(sizeof(char) * (size1 + n + 1));
	if (s == NULL)
	{
		return (NULL);
	}
	strncpy(s, s1, size1);
	strncpy(s + size1, s2, n);
	s[size1 + n] = '\0';
	return (s);
}
