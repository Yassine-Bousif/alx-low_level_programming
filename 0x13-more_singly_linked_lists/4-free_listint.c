#include "lists.h"

/**
 * free_listint - frees a linked list
 *
 * @head: head of the list to be freed
 */

void free_listint(listint_t *head)
{
	listint_t *te;

	while (head)
	{
		te = head->next;
		free(head);
		head = te;
	}
}
