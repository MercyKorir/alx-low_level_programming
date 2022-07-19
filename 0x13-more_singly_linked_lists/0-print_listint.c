#include "lists.h"

/**
* print_listint - prints elements of a list
* @h: pointer
* Return: returns the number of nodes
*/
size_t print_listint(const listint_t *h)
{
	listint_t *current_node = h;
	size_t count = 0;

	while (current_node != NULL)
	{
		printf("%d\n", current_node->n);
		count++;
		current_node = current_node->next;
	}
	return (count);
}
