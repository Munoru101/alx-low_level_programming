#include <stdio.h>
#include "lists.h"
/**
 * print_listint - function that prints all the elements of
 * a listint_t list
 * @h: pointer to argument of type listint_t
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t node_num = 0;
	const listint_t *current = h;
	int tmp, num, digits;

	while (current != NULL)
	{
		num = current->n;
		digits = 1;
		if (num < 0)
		{
			_putchar('-');
			num = -num;
		}
		tmp = num;
		while (tmp / 10 > 0)
		{
			digits *= 10;
			tmp /= 10;
		}
		while (digits > 0)
		{
			_putchar('0' + num / digits);
			num %= digits;
		}
		current = current->next;
		if (current != NULL)
		{
			_putchar(',');
			node_num++;
		}
	}
	_putchar('\n');
	return (node_num);
}
