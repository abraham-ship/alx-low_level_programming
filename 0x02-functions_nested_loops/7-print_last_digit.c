#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @x: number to be checked
 * Return: last digit of the number
 */
int print_last_digit(int x)
{
	int j = x % 10;

	if (x < 0)
		j *= -1;

	_putchar(j + '0');

	return (j);
}
