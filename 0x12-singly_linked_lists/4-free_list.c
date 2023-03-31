#include "lists.h"

/**
 * free_list - a function that frees a list_t list.
 * @head: pointer to linked list
 */
void free_list(list_t *head)
{
	list_t *tmp = malloc(sizeof(list_t));

	while (head != NULL)
	{
		free(tmp);
		tmp = head->next;
		head = tmp;
	}
}
