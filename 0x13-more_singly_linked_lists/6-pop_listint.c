#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 *
 * @head: pointer to the first element in the linked list
 *
 * Return: the node that was deleted,
 * or 0 if the list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *t;
	int x;

	if (!head || !*head)
		return (0);

	x = (*head)->n;
	t = (*head)->next;
	free(*head);
	*head = t;

	return (x);
}
