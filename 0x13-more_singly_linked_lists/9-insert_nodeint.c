#include "lists.h"

/**
 * insert_nodeint_at_index - a function that inserts a new node at a given
 * position.
 * @head: pointer to pointer to list
 * @idx: index where data should be inserted
 * @n: data to be inserted
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *tmp;
	unsigned int i = 0;

	if (*head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	new->n = n;
	new->next = NULL;
	if (idx < 1 || idx > i + 1)
		return (NULL);
	while (idx--)
	{
		if (idx == 0)
		{
			tmp = new;
			tmp->next = *head;
			*head = tmp;
		}
		else
			*head = (*head)->next;
		i++;
	}
	return (tmp);
}
