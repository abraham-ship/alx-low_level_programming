#include "lists.h"

/**
 * dlistint_len - get number of elements in a list
 * @h: pointer to header
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}
