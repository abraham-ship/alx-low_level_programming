#include "hash_tables.h"


/**
 * key_index - a function that gives you the index of a key.
 * @key: is the key
 * @size: size of array of hash table
 * Return: the index at which the key/value pair should be stored in
 * the array of the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
