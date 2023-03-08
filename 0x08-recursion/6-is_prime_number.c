#include "main.h"

/**
 * prime - check for prime number.
 * @count: first interger
 * @i: second interger
 * Return: 1 if number is prime. 0 otherwise
 */
int prime(int count, int i)
{
	if (i % count == 0)
		return (0);
	else if (i / count == 1)
		return (1);
	else
		return (prime(count + 1, i));
}

/**
 * is_prime_number - a function that returns 1 if the input integer
 * is a prime number, otherwise return 0.
 * @n: number to be checked.
 * Return: if interger is prime or not.
 */
int is_prime_number(int n)
{
	return (prime(2, n));
}
