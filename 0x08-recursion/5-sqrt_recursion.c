#include "main.h"
int isqrt(int s, int n);

/**
 * _sqrt_recursion - a function that returns the natural square root of
 * a number.
 * @n: number to calculate root.
 * Return: square root of number.
 */
int _sqrt_recursion(int n)
{
	return (isqrt(n, 1));
}

/**
 * isqrt - a function that returns the natural square root of a number.
 * @s: number to find square root for.
 * @n: number to be tested.
 * Return: square root if number is has a natural root,
 * other wise -1.
 */
int isqrt(int s, int n)
{
	int sqroot;

	sqroot = n * n;
	if (sqroot == s)
		return (n);
	else if (sqroot < s)
		return (isqrt(s, n + 1));
	else
		return (-1);
}
