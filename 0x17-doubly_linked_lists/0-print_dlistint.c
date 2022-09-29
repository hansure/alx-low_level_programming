#include "lists.h"

/**
 * print_dlistint: Prints all the elements
 * @h: Pointer to the list
 * Return: Number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{

	const dlistint_t *node = h;
	size_t count = 0;

	while (node)
	{
	
		printf("%i\n", node->n);
		count++;
		node = node->next;
	
	}

	return (count);
}
