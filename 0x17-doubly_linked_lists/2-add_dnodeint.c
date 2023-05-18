#include "lists.h"

/**
 * add_dnodeint - a function that adds a new node at the beginning of a list.
 * @head: pointer to head
 * @n: new element
 * Return: address of new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	int new = n;
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	new_node->n = new;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
