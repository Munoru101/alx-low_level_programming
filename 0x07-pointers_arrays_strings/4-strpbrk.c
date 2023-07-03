#include <stdio.h>
/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * Description: locates the first occurrence in the string @s of any bytes in the string @accept
 * @s and @accept: pointers to char
 * Return: pointer to the byte in @s that matches one of the bytes in @accept
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s != '\0')
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
