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

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *tmp2;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	/* if index == 0, delete the head */
	if (index == 0)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
		return (1);
	}

	tmp = *head;
	for (i = 0; i < index - 1; i++)
	{
		if (tmp == NULL)
			return (-1);
		tmp = tmp->next;
	}

	tmp2 = tmp->next;
	tmp->next = tmp2->next;
	free(tmp2);

	return (1);
}
