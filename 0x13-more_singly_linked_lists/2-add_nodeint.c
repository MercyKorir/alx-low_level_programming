#include "lists.h"

/**
* add_nodeint - adds new node to beginning of list
* @head: pointer
* @n: new data
* Return: address of node
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = (listint_t *)malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	else
	{
		new_node->n = n;
		new_node->next = (*head);
		(*head) = new_node;
	}
	return (&new_node);
}
