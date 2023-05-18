#include "lists.h"

/**
 * sum_dlistint - a function that returns the sum of all the data (n) of a
 * linked list.
 * @head: pointer to head
 * Return: 0 if list is empty, sum otherwise
 */
int sum_dlistint(dlistint_t *head)
{
	int total = 0;

	if (head == NULL)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
