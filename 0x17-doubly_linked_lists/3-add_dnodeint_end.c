#include "lists.h"

/**
 * add_dnodeint_end - a function that adds a new node at the end of a list.
 * @head: pointer to head
 * @n: new element
 * Return: address of the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *last;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);
	last = *head;
	while (last != NULL && last->next != NULL)
		last = last->next;

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = last;

	if (last != NULL)
		last->next = new_node;

	if (*head == NULL)
		*head = new_node;
	return (new_node);
}
