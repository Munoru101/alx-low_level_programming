#include <stdio.h>
/**
 * print_listint - function that prints all the elements of
 * a listint_t list
 * @h: pointer to argument of type listint_t
 * Return: number of nodes
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
}listint_t;
size_t print_listint(const listint_t *h)
{
	size_t node_num = 0;
	const listint_t *current = h;
	while (current != NULL)
	{
		printf("%d", current->n);
		current = current->next;
		if (current != NULL)
		{
			printf(",");
			node_num++;
		}
	}
	printf("\n");
	return (node_num);
}
