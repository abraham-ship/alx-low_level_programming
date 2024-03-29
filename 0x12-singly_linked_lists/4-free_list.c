#include "lists.h"

/**
 * free_list - a function that frees a list_t list.
 * @head: pointer to linked list
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
