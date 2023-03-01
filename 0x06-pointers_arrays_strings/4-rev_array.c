#include "main.h"

/**
 * reverse_array - a function that reverses the content of an array,
 * of integers.
 * @a: array to be reversed.
 * @n:is the number of elements of the array
 */
void reverse_array(int *a, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
