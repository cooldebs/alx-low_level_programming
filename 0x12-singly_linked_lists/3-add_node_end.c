#include "lists.h"

/**
 * add_node_end - adds a node at the end of a linked list
 * @head: head pointer
 * @str: string
 *
 * Return: address to the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	int x;

	for (x = 0; str[x]; x++)
	{
		;
	}
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = x;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		list_t *last = *head;

		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}
	return (new);
}
