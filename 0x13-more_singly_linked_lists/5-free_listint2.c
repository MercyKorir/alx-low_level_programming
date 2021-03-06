#include "lists.h"

/**
* free_listint2 - frees up link
* @head: pointer
* Return: void
*/
void free_listint2(listint_t **head)
{
	listint_t *current, *temp;

	current = *head;
	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp);
	}
	*head = NULL;
}
