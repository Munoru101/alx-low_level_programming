#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - function that deletes the nead node of
 * a listint_t linked list
 * @head: pointer to the pointer of linked list head
 * Return: The head node's data(n)
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	if (*head == NULL)
	{
		return (0);
	}
	tmp = *head;
	n = tmp->n;
	*head = (*head)->next;
	free(tmp);
	return (n);
}
