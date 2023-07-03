#include <stdio.h>
/**
 * _strstr - function that locates a substring
 * @needle: the substring
 * @haystack: the string
 * Description: _strstr finds first occurrence of @needle in @haystack
 * Terminating null bytes are not compared
 * Return: beginning of the located substring, or NULL if substring not found
 */
char *_strstr(char *haystack, char *needle)
{
	while (*needle != '\0' && *haystack == *needle)
		{
			haystack++;
			needle++;
		}
	if (*needle == '\0')
	{
		return (haystack);
	}
	return (NULL);
}
