#include "lists.h"
/**
 * get_nodeint_at_index: Locates a given node 
 * @head: A pointer to the head of list
 * @index: The index of the node to locate
 * Returjn: If the node does not exist NULL otherwise the located node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{

	unsigned int node;

	for (node = 0; node < index; node++)
	{
	
		if (head == NULL)
			return (NULL);
		head = head->next;
	}

	return (head);
}
