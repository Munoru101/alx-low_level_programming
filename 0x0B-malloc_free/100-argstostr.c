#include <stdlib.h>
#include "main.h"
/**
 * argstostr - concatenates all arguments of a program
 * @ac: number of arguments
 * @av: array of pointers to the arguments
 * Return: Pointer to new string on Success.
 * On failure, or if ac or av is NULL, return NULL.
 */
char *argstostr(int ac, char **av)
{
	int i, j, index = 0, len = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		if (av[i] != NULL)
		{
			j = 0;
			while (av[i][j] != '\0')
			{
				len++;
				j++;
			}
			len++;
		}
	}
	str = (char *)malloc(len + 1);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		if (av[i] != NULL)
		{
			j = 0;
			while (av[i][j] != '\0')
			{
				str[index++] = av[i][j++];
			}
			str[index++] = '\n';
		}
	}
	str[index] = '\0';
	return (str);
}
