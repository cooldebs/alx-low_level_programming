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
	dlistint_t *dummy = *h, *new;
	unsigned int i;

	if (h == NULL)
		return (NULL);
	else if (idx == 0)
		return (add_dnodeint(h, n));
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	for (i = 0; dummy; i++)
	{
		if (i == idx)
		{
			new->prev = dummy->prev;
			new->next = dummy;
			(dummy->prev)->next = new;
			dummy->prev = new;
			return (new);
		}
		dummy = dummy->next;
	}
	if (i == idx)
		add_dnodeint_end(h, n);
	free(new);
	return (NULL);
}
