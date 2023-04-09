#include "main.h"

/**
 * clear_bit - a function that sets the value of a bit to 0 at a given index.
 * @n: pointer to nuumber
 * @index: index to be cleared
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (*n && index)
	{
		index = ~(1 << index);
		*n &= index;
		return (1);
	}
	else
		return (-1);
}
