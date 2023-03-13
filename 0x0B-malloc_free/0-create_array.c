#include "main.h"
#include <stdlib.h>

/**
 * create_array - a function that creates an array of chars, and initializes
 * it with a specific char.
 * @size: bytes to allocate
 * @c: character to intialize
 * Return: pointer to array
 */
char *create_array(unsigned int size, char c)
{
	int i;
	char *p;

	if (size == 0 || size == NULL)
		return (NULL);
	p = malloc(sizeof(char) * size);

	for (i = 0; i < size; i++)
		p[i] = c;
	return (p);
}
