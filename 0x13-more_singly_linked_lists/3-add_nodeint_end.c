#include "lists.h"

/**
* add_nodeint_end - adds a new node to end of list
* @head: pointer
* @n: new data
* Return: address of node
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = (listint_t *)malloc(sizeof(listint_t));
	listint_t *last = *head;

	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (NULL);
	}
	while (last->next != NULL)
		last = last->next;
	last->next = new_node;
	return (new_node);
}
