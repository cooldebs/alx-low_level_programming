#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node
 * @head: head node
 * @index: the index to delete
 *
 * Return: 1 on success
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int x;
	dlistint_t *ptr = *head;

	if (*head == NULL || head == NULL)
		return (-1);
	else if (index == 0)
	{
		*head = (*head)->next;
		if (*head)
			(*head)->prev = NULL;
		free(ptr);
		return (1);
	}
	for (x = 0; ptr; x++)
	{
		if (x == index)
		{
			if (ptr->next == NULL)
			{
				ptr->prev->next = NULL;
				free(ptr);
				return (1);
			}
			ptr->prev->next = ptr->next;
			ptr->next->prev = ptr->prev;
			free(ptr);
			return (1);
		}
		ptr = ptr->next;
	}
	return (-1);
}
