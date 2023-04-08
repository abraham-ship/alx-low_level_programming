#include "main.h"

/**
 * set_bit - a function that sets the value of a bit to 1 at a given index.
 * @n: number to be changed
 * @index: index to change
 * Return:1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	index = 1 << index;
	*n = *n | index;
	return (*n);
}
