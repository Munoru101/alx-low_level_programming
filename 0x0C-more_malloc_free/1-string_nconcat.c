#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - function that concatenates two strings
 * @s1: the first or lead string
 * @s2: the second or follower string
 * @n: the number of s2 bytes to concatenate to s1
 * Return: On success, a pointer to newly allocated space
 * On failure, NULL.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int length, i = 0, j = 0;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	if (n >= j)
		length = i + j;
	else
		length = i + n;
	str = malloc(sizeof(char) * (length + 1));
	if (str == NULL)
		return (NULL);
	length = 0;
	for (i = 0; s1[i]; i++)
		str[length++] = s1[i];
	for (j = 0; s2[j] && j < n; j++)
		str[length++] = s2[j];
	str[length] = '\0';
	return (str);
}
