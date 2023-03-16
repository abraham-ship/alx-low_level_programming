#include "main.h"
#include <stdlib.h>

/**
 * array_range - a function that creates an array of integers.
 * @min: smallest value in array
 * @max: largest value in array
 * Return: pointer to memory
 */
int *array_range(int min, int max)
{
	int *ptr, i, j;

	j = max - min + 1;
	if (min > max)
		return (NULL);
	ptr = malloc(sizeof(int) * j);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < j; i++)
		ptr[i] = min++;
	return (ptr);
}
