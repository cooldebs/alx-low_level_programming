#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: head node
 * @idx: position to insert node
 * @n: value of node
 *
 * Return: address of the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int j;
	dlistint_t *newNode;
	dlistint_t *temp = *h;

	newNode = malloc(sizeof(dlistint_t));
	if (!newNode || !h)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (j = 0; temp && j < idx; j++)
	{
		if (j == idx - 1)
		{
			if (temp->next == NULL)
				return (add_dnodeint_end(h, n));
			newNode->next = temp->next;
			newNode->prev = temp;
			temp->next->prev = newNode;
			temp->next = newNode;
			return (newNode);
		}
		else
			temp = temp->next;
	}
	return (NULL);
}
