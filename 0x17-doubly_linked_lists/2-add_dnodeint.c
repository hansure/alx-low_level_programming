#include "lists.h"
/**
 * add_dnodeint: adds a new node at the front of the list
 * @head: Pointer to the first elment of the list
 * @n: Int the value of the new node
 * Return: Address of the new elements or null if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{

	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head)
		(*head)->prev = new;
	*head = new;

	return (new);
}
