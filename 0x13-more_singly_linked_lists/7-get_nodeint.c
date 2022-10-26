#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: pointer to the head of the linked list
 * @index: index of the node to find
 *
 * Return: pointer to the desired node or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t x;

	for (x = 0; (x < index) && (head->next); x++)
		head = head->next;
	if (x < index)
		return (NULL);
	return (head);
}
