#include "lists.h"

/**
 * add_nodeint_end - a function that adds a new node at the end of a
 * listint_t list.
 * @head: pointer to list
 * @n: item to be added
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	int s;

	listint_t *new = malloc(sizeof(listint_t));
	listint_t *lastnode = *head;

	s = n;

	new->n = s;
	new->next = NULL;
	if (new == NULL)
		return (NULL);
	if (*head == NULL)
		*head = new;
	else
	{
		lastnode = *head;
		while (lastnode->next != NULL)
			lastnode = lastnode->next;
		lastnode->next = new;
	}
	return (*head);
}
