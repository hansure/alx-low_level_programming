#include "lists.h"

/**
 * dlistint_len: Return the number of elements on the list
 * @h: Pointer to the list
 * Return: The  number of node
 */

size_t dlistint_len(const dlistint_t *h)
{

	const dlistint_t *node = h;
	size_t count = 0;

	while (node)
	{
	
		count++;
		node = node->next;

	}

	return (count);
}
