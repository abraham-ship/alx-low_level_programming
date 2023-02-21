#include <stdio.h>

/**
 * main - prints the sum of all the multiples of 3 or 5 below 1024
 * Return: 1 if program fails. 0 otherwise
 */
int main(void)
{
	int i, sum;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
		{
			sum += i;
		}
	}
	printf("%d\n", sum);
	return (0);
}
