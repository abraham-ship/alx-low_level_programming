#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer.
 * @array: array of intergers
 * @size: number of elements in the array
 * @cmp: pointer to the function to be used to compare values
 * Return: -1 if no element matches
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
