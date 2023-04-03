#include "lists.h"

/**
 * add_nodeint - a function that adds a new node at the beginning of
 * a listint_t list.
 * @head: pointer to list
 * @n: item to be added
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	int s;

	listint_t *new = malloc(sizeof(listint_t));
	s = n;

	if (new == NULL)
		return (NULL);
	new->n = s;
	new->next = *head;
	*head = new;
	return (new);
}
