#include "main.h"

/**
 * get_bit - a function that returns the value of a bit at a given index.
 * @n: number to check
 * @index: index to check
 * Return: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int i = (n >> index) & 1;

	if (n)
		return (i);
	else
		return (-1);
}
