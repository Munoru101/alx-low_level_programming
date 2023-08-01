#include <stdlib.h>
#include "lists.h"
/**
 * sum_listint - function that returns the sum of 
 * all the data(n) of a listint_t linked list
 * @head: pointer to head of the list
 * Return: sum of all data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current_node = head;

	while (current_node != NULL)
	{
		sum += current_node->n;
		current_node = current_node->next;
	}
	return (sum);
}
