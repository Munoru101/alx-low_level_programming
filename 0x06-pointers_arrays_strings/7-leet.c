#include <stdio.h>
#include "main.h"

/**
 * leet- encodes a string into 1337
 * @str: string
 * @i: outer loop that iterates over each character of input str
 * @j: inner loopt that iterates over the arrays string and stringLeet
 * return: string modified in-place
 */

char *leet(char *str)
{
	char String[] = "aAeEoOtTlL";
	char StringLeet[] = "4433007711";
	int i, j;

	for (i = 0, j = 0; str[i] != '\0'; i++)
	{
		for (j = 0; String[j] != '\0'; j++)
		{
			if (str[i] == String[j])
			{
				str[i] = StringLeet[j];
				break;
			}
		}
	}
	return (str);
}
