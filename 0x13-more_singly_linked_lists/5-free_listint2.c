#include "lists.h"

/**
 * free_listint2 - a function that frees a listint_t list.
 * @head: pointer to list
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	while (*head != NULL)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
	head = NULL;
}
