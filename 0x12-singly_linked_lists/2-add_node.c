#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to linked list pointer
 * @str: string
 *
 * Return: address of new element or NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	int x;
	list_t *new;

	for (x = 0; str[x]; x++)
	{
		;
	}
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = x;
	new->next = *head;
	*head = new;
	return (new);
}
