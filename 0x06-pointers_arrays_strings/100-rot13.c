#include <stdio.h>

/** rot13 - function encodes a string using rot13.
 * rot13 is a simple letter substitution cipher
 * @str: string to be encoded
 * return: encoded str
 */

char *rot13(char *str)
{
	char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13alphabet[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; alphabet[j] != '\0'; j++)
		{
			if (str[i] == alphabet[j])
			{
				str[i] = rot13alphabet[j];
				break;
			}
		}
	}
	return (str);
}
