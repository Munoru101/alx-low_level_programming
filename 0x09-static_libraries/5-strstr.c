#include <stdio.h>
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
