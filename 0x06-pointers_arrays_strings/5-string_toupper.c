#include <stdio.h>
#include <ctype.h>

/**
 * string_toupper converts to uppercase
 * @str: string to be converted
 * Return: an uppercase string
 */

char *string_toupper(char *str)
{
	char *ptr = str;

	while (*ptr != '\0')
	{
		*ptr = (char)toupper((int)*ptr);
		ptr++;
	}
	return (str);
}
