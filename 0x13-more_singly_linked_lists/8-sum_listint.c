#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data in a listint_t list
 *
 * @head: first node in the linked list
 *
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *t = head;

	while (t)
	{
		sum += t->n;
		t = t->next;
	}

	return (sum);
}
