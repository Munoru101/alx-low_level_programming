#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * argstostr - function that concatenates all the args
 * @ac: integer argument
 * @av: pointer to str pointer argument
 * Return: pointer to a new string on success
 * Failure returns Null.
 */
char *argstostr(int ac, char **av)
{
	int len = 0, i, j = 0, arg_len;
	char *size;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		len += strlen(av[i]) + 1;
	}
	size = (char *)malloc(len + 1);
	if (size == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		arg_len = strlen(av[i]);
		strncpy(size + j, av[i], arg_len);
		j += arg_len;
		size[j++] = '\n';
	}
	size[len] = '\0';
	return (size);
}
