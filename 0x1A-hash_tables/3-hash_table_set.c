#include "hash_tables.h"

/**
 * hash_table_set - a function that adds an element to the hash table.
 * @ht: hash table you want to add or update the key/value to
 * @key: is the key
 * @value: is the value associated with the key
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	char *val_copy;
	hash_node_t *new, *ptr = NULL;
	unsigned long int index;

	if (!ht || !key || !*key || !value)
		return (0);
	val_copy = strdup(value);
	if (!val_copy)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	ptr = ht->array[index];

	while (ptr)
	{
		if (!strcmp(key, ptr->key))
		{
			free(ptr->value);
			ptr->value = val_copy;
			return (1);
		}
		ptr = ptr->next;
	}

	new = malloc(sizeof(hash_node_t));
	if (!new)
	{
		free(val_copy);
		return (0);
	}
	new->key = strdup(key);
	if (!new->key)
	{
		free(new);
		return (0);
	}

	new->value = val_copy;
	new->next = ht->array[index];
	ht->array[index] = new;
	return (1);
}
