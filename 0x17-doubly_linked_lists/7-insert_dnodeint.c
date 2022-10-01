#include "lists.h"

/**
 * insert_dnodeint_at_index - this function inserts new node at
 * gitven position of doubly linked list
 * @h: head of node
 * @idx: position to insert index
 * @n: data of the node
 * Return: address of the new node
 * NULL is returned on failure
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp;
	unsigned int i;
	dlistint_t *new_node = (dlistint_t *)malloc(sizeof(dlistint_t));


	if (new_node == NULL)
		return (NULL);
	if (h == NULL)
		return (NULL);
	temp = *h;
	for (i = 0; i < idx; i++)
	{
		temp = temp->next;
		if (temp == NULL)
			return (NULL);
	}
	new_node->n = n;
	new_node->next = temp->next;
	new_node->prev = temp;
	temp->next = new_node;
	temp->next->prev = new_node;
	if (new_node == NULL)
		return (NULL);
	return (new_node);
}
