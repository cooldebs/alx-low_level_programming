#include "lists.h"

/**
 * add_dnodeint - adds a new node at the begining of a linked list
 * @head: head node
 * @n: int value to store in the list
 *
 * Return: address of the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

	if (head == NULL)
		return (NULL);

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;

	newNode->next = *head;
	newNode->prev = NULL;

	if (*head)
		(*head)->prev = newNode;

	*head = newNode;

	return (newNode);
}
