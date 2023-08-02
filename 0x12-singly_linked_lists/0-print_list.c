#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * print_list - function that prints all the elements
 * of a list_t list
 * @h: pointer to the head of the list
 * Return: The number of nodes in the list 
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;
	const list_t *node = h;

	if (node == NULL)
	{
		return (i);
	}
	while (node != NULL)
	{
		if (node->str != NULL)
		{
			printf("[%u] %s\n", node->len, node->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		i++;
		node = node->next;
	}
	return (i);
}
