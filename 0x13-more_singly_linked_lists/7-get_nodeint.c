#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns the nth node of a
 * listint_t linked list.
 * @head: pointer to list
 * @index: index of the node
 * Return: nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	listint_t *new = head;

	if (head == NULL)
		return (NULL);
	while (new != NULL)
	{
		if (i == index)
			return (new);
		i++;
		new = head->next;
	}
	return (new);
}
