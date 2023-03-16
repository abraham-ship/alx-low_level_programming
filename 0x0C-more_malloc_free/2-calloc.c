#include "main.h"
#include <stdlib.h>

/**
 * _calloc - a function that allocates memory for an array, using malloc.
 * @nmemb: array
 * @size: size of array
 * Return: pointer to allocated space
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *ptr, i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(sizeof(nmemb) * size);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ptr[i] = 0;
	return (ptr);
}
