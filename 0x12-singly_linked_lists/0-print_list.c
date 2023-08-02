#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * print_list - function that prints all the elements
 * of a list_t list
 * @h: pointer to the head of the list
 * Return: Always 0.
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;
	const list_t *node = h;

	while (node != NULL)
	{
		if (node->str != NULL)
		{
			printf("[%u]%s\n", node->len, node->str);
		}
		else
		{
			printf("[0](nil)\n");
		}
		i++;
		node = node->next;
	}
	return (i);
}
