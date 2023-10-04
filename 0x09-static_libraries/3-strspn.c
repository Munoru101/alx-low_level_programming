#include <stdio.h>
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i;

	while (*s != '\0')
	{
		for (i = 0; accept[i] != '\0';i++)
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
