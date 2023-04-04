#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a listint_t linked list.
 *
 * @head: double pointer to the head of the listint_t linked list.
 *
 * @index: index of the node to delete.
 *
 * Return: 1 if successful, -1 otherwise.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *te = *head;
	listint_t *cu = NULL;
	unsigned int x = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(te);
		return (1);
	}

	while (x < index - 1)
	{
		if (!te || !(te->next))
			return (-1);
		te = te->next;
		x++;
	}


	cu = te->next;
	te->next = cu->next;
	free(cu);

	return (1);
}
