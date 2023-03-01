#include "main.h"

/**
 * reverse_array - a function that reverses the content of an array,
 * of integers.
 * @a: array to be reversed.
 * @n:is the number of elements of the array
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	i = 0;
	n--;
	while (i < n)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
		i++;
		n--;
	}
}
