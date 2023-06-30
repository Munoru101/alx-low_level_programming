#include <stdio.h>
#include <ctype.h>

/**
 * cap_string - function that capitalizes all words of a string
 * @str: string to be capitalized
 * @capital: flag indicating if to capitalize next character
 * Return: a string that is all caps
 */

char *cap_string(char *str)
{
	int capital = 1;
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (capital && islower(str[i]))
		{
			str[i] = toupper(str[i]);
		}
		capital = 0;
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == ',' || str[i] == ';' || str[i] == '!' || str[i] == '?' || str[i] == '"' || str[i] == '(' || str[i] == ')' || str[i] == '{' || str[i] == '}')
		{
			capital = 1;
		}
	}
	return (str);
}
