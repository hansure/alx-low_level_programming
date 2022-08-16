#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

int main(void)
{

	listint_t *head;

	head = NULL;
	add_nodeint(&head, 0);

	print_listint(head);
	return (0);
}
