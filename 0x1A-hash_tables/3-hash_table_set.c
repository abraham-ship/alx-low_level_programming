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
	hash_node_t *ptr = NULL, *new = NULL;
        unsigned long int index;

        if (!ht || !key || !*key || !value)
                return (0);

        index = key_index((const unsigned char *)key, ht->size);
        ptr = ht->array[index];

        while (ptr)
        {
                if (strcmp(ptr->key, key) == 0)
                {
                        free(ptr->value);
                        ptr->value = strdup(value);
                        return (1);
                }
                ptr = ptr->next;
        }


        new = malloc(sizeof(hash_node_t));
        if (new == NULL)
        {
                free(new);
                return (0);
        }

        new->key = strdup(key);
        new->value = strdup(value);
        new->next = ht->array[index];
        ht->array[index] = new;
        return (1);
}
