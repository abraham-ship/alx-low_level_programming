#include "hash_tables.h"


/**
 * hash_table_create - a function that creates a hash table.
 * @size: size of the array
 * Return: a pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *item;

	item = calloc(1, sizeof(hash_table_t));
	if (!size)
		return (NULL);
	if (item == NULL)
		return (NULL);

	item->size = size;
	item->array = calloc(size, sizeof(hash_node_t *));
	if (item->array == NULL)
	{
		free(item->array);
		return (NULL);
	}

	return (item);
}
