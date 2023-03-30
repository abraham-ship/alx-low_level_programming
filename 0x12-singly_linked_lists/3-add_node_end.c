#include "lists.h"

/**
 * add_node_end - a function that adds a new node at the end of a list_t list
 * @head: pointer to linked list
 * @str: string to be inserted
 * Return: the address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *s;
	int len;

	list_t *new = malloc(sizeof(list_t));
	list_t *lastnode = *head;

	s = strdup(str);
	new->str = s;
	for (len = 0; str[len];)
		len++;
	new->len = len;

	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		lastnode = *head;
		while (lastnode->next != NULL)
			lastnode = lastnode->next;
		lastnode->next = new;
	}
	return (lastnode);
}
