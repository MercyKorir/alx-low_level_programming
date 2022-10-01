#include "lists.h"

/**
 * get_dnodeint_at_index - this function returns the nth node
 * of a doubly linked list
 * @head: current node head
 * @index: position to return node from 0
 * Return: the nth node
 * NULL if node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *nth_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	unsigned int count = 0;

	if (nth_node == NULL)
		return (NULL);
	while (head != NULL)
	{
		if (count == index)
			nth_node = head;
		count += 1;
		head = head->next;
	}
	if (nth_node == NULL)
		return (NULL);
	return (nth_node);
	nth_node = NULL;
}
