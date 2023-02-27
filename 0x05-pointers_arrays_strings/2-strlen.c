#include "main.h"

/**
 * _strlen - print length of a string.
 * @s: string to be calculated.
 * Return: length  of string.
 */
int _strlen(char *s)
{
	int c = 0;

	while (*s != '\0')
	{
		c++;
		s++;
	}

	return (c);
}
