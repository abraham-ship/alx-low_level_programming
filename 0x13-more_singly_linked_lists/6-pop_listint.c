#include "lists.h"

/**
 * pop_listint - a function that deletes the head node of
 * a listint_t linked list, and returns the head node’s data (n).
 * @head: pointer to pointer to list
 * Return: head node. 0 if list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;

	if (*head == NULL)
		return (0);
	tmp = *head;
	*head = (*head)->next;
	return (tmp->n);
	free(tmp);
	return (0);
}
