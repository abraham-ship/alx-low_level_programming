#include <stdio.h>
#include <math.h>

/**
 * main - prints the largest prime factor of the number 612852475143.
 * Return: 1 if program fails. 0 otherwise.
 */
int main(void)
{
	long int num = 612852475143;
	int j;

	while (num % 2 == 0)
	{
		/*printf("%d ", 2);*/
		num = num / 2;
	}
	for (j = 3; j <= sqrt(num); j += 2)
	{
		while (num % j == 0)
		{
			/*printf("%d ", j);*/
			num = num / j;
		}
	}
	if (num > 2)
		printf("%ld", num);
	printf("\n");

	return (0);

}
