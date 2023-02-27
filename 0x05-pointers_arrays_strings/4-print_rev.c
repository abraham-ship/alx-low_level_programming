#include "main.h"

/**
 * print_rev - prints a string in reverse followed by a new line.
 * @s: string to be reversed.
 */
void print_rev(char *s)
{
	int i = 0, x = 0;
	char *begin = s, *end = s, t;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	for (; x < i - 1; x++)
		end++;
	for (; x < i / 2; x++)
	{
		t = *end;
		*end = *begin;
		*begin = t;

		begin++;
		end--;
	}
	_putchar('\n');
}
