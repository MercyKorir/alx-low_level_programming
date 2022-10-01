#include "lists.h"

/**
 * add_dnodeint - adds a new node at beginning of a
 * doubly linked list
 * @head: head of current node
 * @n: data to be inserted at node
 * Return: the address of the new element
 * NULL is returned on failure
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = (dlistint_t *)malloc(sizeof(dlistint_t));

	new_node->n = n;
	new_node->next = (*head);
	new_node->prev = NULL;
	if ((*head) != NULL)
		(*head)->prev = new_node;
	(*head) = new_node;
	if (new_node == NULL)
		return (NULL);
	return (new_node);
}
