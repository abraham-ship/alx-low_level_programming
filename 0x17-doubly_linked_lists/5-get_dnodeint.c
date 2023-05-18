#include "lists.h"

/**
 * get_dnodeint_at_index - a function that returns the nth node of a linked
 * list.
 * @head: pointer to head
 * @index: index to get
 * Return: NULL or node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);
	while (i < index && head)
	{
		head = head->next;
		i++;
	}
	if (i == index)
		return (head);
	return (NULL);
}
