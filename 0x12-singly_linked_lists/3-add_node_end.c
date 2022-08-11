#include "lists.h"
#include <string.h>
/**
 * add_node_end: Adds a new node at the end of a list_t list
 * @head: A pointer to the head of teh list_t list
 * @str: The string to be added to teh list_list
 * Return: I the function fails return NULL else teh address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{

	char *dup;
	int len;
	list_t *new, *last;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	dup = strdup(str);
	if (str == NULL)
	{
	
		free(new);
		return (NULL);
	}
	new->str = dup;
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
	
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}

	return (*head);
}
