#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - prints if a value is positive, zero or negative
 * Return: 1 if program fails. 0 otherwise
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		/* prints if value is positive */
		printf("%i is positive\n", n);
	}
	else if (n == 0)
	{
		/* prints if value is zero */
		printf("%i is zero\n", n);
	}
	else
	{
		/* prints if condition is false */
		printf("%i is negative\n", n);
	}
	return (0);
}
