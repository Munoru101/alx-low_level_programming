#include <stdio.h>
#include "lists.h"
/**
 * listint_len - function that returns the number of
 * elements in a linked listint_t list
 * @h: pointer to listint_t list
 * Return: Number of elements in list
 */
size_t listint_len(const listint_t *h)
{
	size_t node_num = 0;

	while (h != NULL)
	{
		node_num++;
		h = h->next;
	}
	return (node_num);
}
