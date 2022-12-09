#include "lists.h"

/**
 * sum_dlistint - sums all the data in a linked list
 * @head: head node
 *
 * Return: sum of all the data
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
