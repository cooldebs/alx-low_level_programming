#include "lists.h"

/**
 * get_dnodeint_at_index - gets the node at a given index
 * @head: head node
 * @index: index position of the node
 *
 * Return: node at index index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int k;

	if (!head)
		return (NULL);
	else if (index == 0)
		return (head);
	for (k = 0; head; k++)
	{
		if (k == index)
			return (head);
		head = head->next;
	}
	return (NULL);
}
