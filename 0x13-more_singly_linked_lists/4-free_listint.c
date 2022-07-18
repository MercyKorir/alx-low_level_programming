#include "lists.h"

/**
* free_listint - frees a list
* @head: pointer
* Return: void
*/
void free_listint(listint_t *head)
{
	listint_t *currentNode;

	while (head != NULL)
	{
		currentNode = head;
		head = head->next;
		free(currentNode);
	}
}
