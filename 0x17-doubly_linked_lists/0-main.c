#include "lists.h"
#include <stdlib.h>
#include <string.h>

int main(void)
{
	dlistint_t *head;

	head = NULL;
	add_dnodeint(&head, 0);
	add_dnodeint(&head, 1);
	add_dnodeint(&head, 2);
	add_dnodeint(&head, 3);
	add_dnodeint(&head, 4);
	print_dlistint(head);
	return (EXIT_SUCCESS);
}
