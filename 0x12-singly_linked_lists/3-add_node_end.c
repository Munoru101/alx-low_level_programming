#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - function that adds  new node at the end
 * of a list_t list.
 * @head: pointer to the head pointer
 * @str: string to be duplicated and added to the new node.
 * Return: On success, return the address of the new element
 * On failure, NULL is returned.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *current_node;

	if (str == NULL || head == NULL)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
	}
	new_node->len = strlen(str);
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	current_node = *head;
	while (current_node->next != NULL)
	{
		current_node = current_node->next;
	}
	current_node->next = new_node;
	return (new_node);
}
