#include "lists.h"


/**
 * listint_len - returns the number of elements
 * in a linked listint_t list
 *
 * @h: pointer to the head of the list
 *
 *
 * return: number of elements in the listint_t list
 */

size_t listint_len(const listint_t *h)
{
	size_t x = 0;

	while (h)
	{
		x++;
		h = h->next;
	}
	return (x);
}
