#include <stdio.h>

/**
 * natural - prints the sum of all the multiples of 3 or 5 below 1024
 */
void natural(void)
{
	int i, sum;

	for (i > 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
		{
			sum += i;
		}

		printf("%d\n", sum);
	}
}
