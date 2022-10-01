#include "lists.h"

/**
 * sum_dlistint - this function returns the sum of all the data(n)
 * of a doubly linked list
 * @head: head of current node
 * Return: the sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
