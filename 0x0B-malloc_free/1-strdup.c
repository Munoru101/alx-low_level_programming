#include <stdlib.h>
#include "main.h"
/**
 * _strdup - function that returns a pointer to a 
 * new string which is a duplicate of a string.
 * @str: the original string to be duplicated
 * Return: on success, a pointer to duplicated string
 * Null if str is null, or insufficient memory allocated
 */
char *_strdup(char *str)
{
	int i, length = 0;
	char *newStr;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
	{
		length++;
	}
	newStr = malloc(sizeof(char) * (length + 1));
	if (newStr == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
	{
		newStr[i] = str[i];
	}
	newStr[length] = '\0';
	return (newStr);
}
