#include "lists.h"

/**
 * print_dlistint - this function prints all elements of a doubly
 * linked list
 * @h: head of node
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count += 1;
	}
	return (count);
}
