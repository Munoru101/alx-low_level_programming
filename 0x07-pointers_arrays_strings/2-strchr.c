#include <stdio.h>
/**
 * _strchr - function that locates a character in a string
 * @c: character to be located in 
 * @s: pointer to string
 * Return: pointer to first occurrence of the character c
 * Return: NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
	}
	return (NULL);
}
