#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint - function that adds a new node at 
 * the beginning of a listint_t list
 * @head: pointer to pointer to head of the list
 * @n: Integer value to be stored in the new node.
 * Return: On success, return the address of the new element
 * On failure, return NULL.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = (listint_t *)malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
