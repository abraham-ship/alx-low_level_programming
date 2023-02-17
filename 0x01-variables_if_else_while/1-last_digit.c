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
	int lastDigit = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (lastDigit > 5)
	{
		/* print if value is greater than 5 */
		printf("Last digit of %i is %i and is greater than 5\n",
		n, lastDigit);
	}
	else if (lastDigit == 0)
	{
		/* print if value is zero */
		printf("Last digit of %i is %i and is 0\n", n, lastDigit);
	}
	else if (lastDigit < 6 && lastDigit != 0)
	{
		/* print if value is less than 6 and is not 0 */
		printf("Last digit of %i is %i and is less than 6 and not 0\n",
		n, lastDigit);
	return (0);
}
