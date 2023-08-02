#include <stdio.h>
#include "lists.h"
/**
 * list_len - function that returns the number of elements
 * in a linked list_t list.
 * @h: pointer to head of list
 * Return: Number of elements in the list.
 */
size_t list_len(const list_t *h)
{
	size_t num;

	while (h != NULL)
	{
		num++;
		h = h->next;
	}
	return (num);
}