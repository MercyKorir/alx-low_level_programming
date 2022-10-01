#include "lists.h"

/**
 * add_dnodeint_end - function adds a new node at end if
 * a doubly linked list
 * @head: head of current node
 * @n: data of node to be added
 * Return: address of new element
 * NULL on failure
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	dlistint_t *temp;

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	temp = *head;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (NULL);
	}
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new_node;
	new_node->prev = temp;
	if (new_node == NULL)
		return (NULL);
	return (new_node);
}
