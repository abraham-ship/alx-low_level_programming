#include "main.h"

/**
 * factorial - a function that returns the factorial of a given number.
 * @n: number
 * Return: -1 if number is less than zero, 1 if the number is zero,
 * otherwise return factorial of the number.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n > 0)
		return (n * factorial(n - 1));
	else
		return (1);
}
