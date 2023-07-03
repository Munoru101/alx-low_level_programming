#include <stdio.h>
/**
 * _strspn - function that gets the length of a prefix substring
 * Return: number of bytes in the initial segment of s which consist
 * only of bytes from accept.
 * @s and @accept: pointers to char
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i;

	while (*s != '\0')
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				count++;
				break;
			}
		}
		if (accept[i] == '\0')
		{
			break;
		}
		s++;
	}
	return (count);
}
