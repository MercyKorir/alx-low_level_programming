#include "lists.h"

/**
* print_list - prints list elements
* @h: pointer to list
* Return: number of nodes
*/
size_t print_list(const list_t *h)
{
	int count = 0;

	if (h->str == NULL || h == NULL)
		printf("[0] (nil)\n");
	while (h != NULL)
	{
		printf("[%d] %s\n", h->len, h->str);
		count++;
		h = h->next;
	}
	return (count);
}
