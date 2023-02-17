#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints if value is greater than 5, or the value is zero,
 * or the value is less than 6 and not zero
 * Return: 1 if program fails. 0 otherwise
*/
int main(void)
{
	int n;
	int l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = n % 10;
	if (l > 5)
	{
		printf("Last digit of %i is %i and is greater than 5\n",
		n, l);
	}
	else if (l == 0)
	{
		printf("Last digit of %i is %i and is 0\n", n, l);
	}
	else if (l < 6 && l != 0)
	{
		printf("Last digit of %i is %i and is less than 6 and not 0\n",
		n, l);
	return (0);
}
