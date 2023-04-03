#include "lists.h"

/**
 * add_nodeint - a function that adds a new node
 * at the beginning of a linked list
 *
 * @head: is pointer to the first node in the list
 * @n: integr to insert in the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nw;

	nw = malloc(sizeof(listint_t));
	if (!nw)
		return (NULL);

	nw->n = n;
	nw->next = *head;
	*head = nw;

	return (nw);
}
