#include "lists.h"

/**
 * sum_dlistint: REturn the sum of all the data
 * @head: Pointer to the list
 * Return: sum of all the data
 */
int sum_dlistint(dlistint_t *head)
{

	dlistint_t *node = head;
	int sum = 0;

	while (node)
	{
		sum += node->n;
		node = node->next;
	}

	return (sum);
}
