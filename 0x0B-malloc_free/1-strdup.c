#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * _strdup - function that returns a pointer to a newly allocated memory
 * The memory contains a copy of the string given as a parameter
 * @str: pointer to the string to be copied
 * Return: Always 0.
 */
char *_strdup(char *str)
{
	unsigned int size;
	char *s;
	
	if (str == NULL)
	{
		return (NULL);
	}
	size = strlen(str) + 1;
	s = malloc(sizeof(char) * size);
	if (s != NULL)
	{
		strcpy(s, str);
	}
	return (s);
}
