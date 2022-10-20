#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: pointer to the start of the list
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *current, *prev;

	current = head;
	while (current != NULL)
	{
		free(current);
		free(current->str);
		free(current);
		current = next;
	}
}
