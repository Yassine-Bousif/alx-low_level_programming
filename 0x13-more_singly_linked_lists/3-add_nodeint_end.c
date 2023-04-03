#include "lists.h"

/**
 *add_nodeint_end - adds a node to the end of a linked list
 *
 *@head: pointer to the head of the list
 *@n: number to be used as content
 *
 *Return: address of the new elemet or NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node;
	listint_t *cu = *head;

	node = malloc(sizeof(listint_t));
	if (node != NULL)
	{
		node->n = n;
		node->next = NULL;
	}
	else
		return (NULL);
	if (cu != NULL)
	{
		while (cu->next != NULL)
			cu = cu->next;

		cu->next = node;
	}
	else
		*head = node;
	return (node);
}
