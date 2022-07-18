#include "lists.h"

/**
* listint_len - prints number of elements
* @h: pointer to lists
* Return: number of elements
*/
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
