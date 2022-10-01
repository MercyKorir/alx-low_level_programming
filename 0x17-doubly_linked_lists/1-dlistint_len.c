#include "lists.h"

/**
 * dlistint_len - this function returns the number of elements in
 * a doubly linked list
 * @h: head of current node
 * Return: the number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count += 1;
	}
	return (count);
}
