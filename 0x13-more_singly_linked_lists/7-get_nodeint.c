#include <stdlib.h>
#include "lists.h"
/**
 * get_nodeint_at_index - function that returns the nth node
 * of a liistint_t linked list
 * @head: pointer to the head node of the list
 * @index: index of the node, starting at 0.
 * Return: the nth node of the list on success
 * On failure: return NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current_node = head;
	unsigned int i;

	while (current_node != NULL)
	{
		if (i == index)
		{
			return (current_node);
		}
		current_node = current_node->next;
		i++;
	}
	return (NULL);
}
