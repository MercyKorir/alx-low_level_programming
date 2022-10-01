#include "lists.h"

/**
 * free_dlistint - this function frees a doubly
 * linked list
 * @head: head of current node
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	if (head)
	{
		free_dlistint(head->next);
		free(head);
	}
}
