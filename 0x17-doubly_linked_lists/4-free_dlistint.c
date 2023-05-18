#include "lists.h"

/**
 * free_dlistint - free a list
 * @head: pointer to head
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	temp = head;

	while (temp != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
