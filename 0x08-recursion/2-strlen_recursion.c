#include "main.h"

/**
 * _strlen_recursion - a function that returns the length of a string.
 * @s: string
 * Return: string length
 */
int _strlen_recursion(char *s)
{
	int i;

	if (*s)
		i = 1 + _strlen_recursion(s + 1);
	else
		return (0);
	return (i);
}
