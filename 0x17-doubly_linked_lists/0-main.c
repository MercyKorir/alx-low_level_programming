#include "lists.h"
#include <stdlib.h>
#include <string.h>

int main(void)
{
	dlistint_t *head;

	head = NULL;
	add_dnodeint_end(&head, 0);
	add_dnodeint_end(&head, 1);
	add_dnodeint_end(&head, 2);
	add_dnodeint_end(&head, 3);
	add_dnodeint_end(&head, 4);
	print_dlistint(head);
	free_dlistint(head);
	head = NULL;
	return (EXIT_SUCCESS);
}
