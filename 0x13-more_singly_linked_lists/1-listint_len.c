#include "lists.h"

/**
 * listint_len - a function that returns the number of elements in a
 * linked listint_t list.
 * @h: pointer to list
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
