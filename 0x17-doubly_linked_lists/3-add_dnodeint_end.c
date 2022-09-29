#include "lists.h"
/**
 * add_dnodeint_end: Adds a node at the end of the list
 * @head: Pointer to the beggining of the list
 * @n: Int value to set the new node
 * Return: The new node or Null if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{

	dlistint_t *new, *aux = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (aux)
	{
	
		while (aux->next)
			aux = aux->next;
		new->prev = aux;
		aux->next = new;
	}
	else
	{
	
		*head = new;
		new->prev = NULL;
	}

	return (new);
}
