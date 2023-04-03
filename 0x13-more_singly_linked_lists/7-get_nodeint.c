#include "lists.h"

/**
* get_nodeint_at_index - return the node of a linked list
*
* @head: pointer to the head of the list
* @index: index of the node to return
*
* Return: the address of the node
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *cursor = NULL;
	unsigned int x = 0;

	while (head != NULL)
	{
		if (x <= index)
	{
		if (x == index)
		{
			cursor =  head;
		break;
		}
	head = head->next;
		x++;
	}
	else
		return (NULL);
	}
	return (cursor);
}
