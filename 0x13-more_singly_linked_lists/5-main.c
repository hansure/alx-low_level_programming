#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

int main(void)
{

	listint_t *head;

	head = NULL;

	add_nodeint_end(&head, 0);

	print_listint(head);
	free_listint2(&head);
	return (0);
}
