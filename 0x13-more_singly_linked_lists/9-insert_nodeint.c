#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a linked list,
 * at a given position
 *
 * @head: pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int x;
	listint_t *ne;
	listint_t *te = *head;

	ne = malloc(sizeof(listint_t));
	if (!ne || !head)
		return (NULL);

	ne->n = n;
	ne->next = NULL;

	if (idx == 0)
	{
		ne->next = *head;
		*head = ne;
		return (ne);
	}

	for (x = 0; te && x < idx; x++)
	{
		if (x == idx - 1)
		{
			ne->next = te->next;
			te->next = ne;
			return (ne);
		}
		else
			te = te->next;
	}

	return (NULL);
}
