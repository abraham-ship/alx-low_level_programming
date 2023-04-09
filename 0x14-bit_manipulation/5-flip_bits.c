#include "main.h"

/**
 * flip_bits- a function that returns the number of bits you would need
 * to flip to get from one number to another.
 * @n: first number
 * @m: second number
 * Return: number of bit flips neede
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int flips = 0, a, b;

	while (n > 0 || m > 0)
	{
		a = (n & 1);
		b = (m & 1);

		if (a != b)
			flips++;
		n >>= 1;
		m >>= 1;
	}
	return (flips);
}
