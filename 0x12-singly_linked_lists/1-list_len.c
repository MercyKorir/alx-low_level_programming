#include "lists.h"

/**
* list_len - prints number of elements
* @h: pointer to linked list
* Return: number of elements
*/
size_t list_len(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
