#include "hash_tables.h"

/**
 * hash_table_get - a function that retrieves a value associated with a key.
 * @ht: is the hash table
 * @key: is the key
 * Return:  the value associated with the element, or NULL if key
 * couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *ptr = NULL;
	unsigned long int index;

	if (!ht || !key || !*key)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	ptr = ht->array[index];
	while (ptr)
	{
		if (!strcmp(key, ptr->key))
		{
			return (ptr->value);
		}
		ptr = ptr->next;
	}
	return (NULL);
}
