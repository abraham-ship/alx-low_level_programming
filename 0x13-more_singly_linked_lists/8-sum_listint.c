#include "lists.h"

/**
 * sum_listint - a function that returns the sum of all the data (n)
 * of a listint_t linked list.
 * @head: pointer to list
 * Return: sum of all the data
 */
int sum_listint(listint_t *head)
{
	int i = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		i += head->n;
		head = head->next;
	}
	return (i);
}
