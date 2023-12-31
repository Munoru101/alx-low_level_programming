#include <stdio.h>
/**
 * binary_to_uint - convert binary number to
 * an unsigned integer
 * @b: Pointer to a string of 0 and 1 chars
 * Return: On success, the converted number
 * Else, 0 if b is null
 * Or one or more chars is not 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i;

	if (b == NULL)
	{
		return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0')
		{
			result = result << 1;
		}
		else if (b[i] == '1')
		{
			result = (result << 1) | 1;
		}
		else
		{
			return (0);
		}
	}
	return (result);
}
