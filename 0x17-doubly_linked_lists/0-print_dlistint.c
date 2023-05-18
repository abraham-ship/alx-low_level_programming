#include "lists.h"

/**
 * print_dlistint - print all elements of list
 * @h: pointer to header
 * Return: number of of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t no_node = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		no_node++;
	}

	return (no_node);
}
