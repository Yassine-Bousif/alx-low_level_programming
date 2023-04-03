#include "lists.h"

/**
 * print_listint - a func that prints all the elements of a linked list
 *
 * @h: type listint_t to be print
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t x = 0;

	while (h)
	{
		printf("%d\n", h->n);
		x++;
		h = h->next;
	}

	return (x);
}
