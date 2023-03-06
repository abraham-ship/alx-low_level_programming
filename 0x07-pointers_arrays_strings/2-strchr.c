#include "main.h"

/**
 * _strchr - a function that locates a character in a string.
 * @s: string to be searched
 * @c: character to be searched
 * Return: first occurence or null.
 */
char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
			return (s);
	} while (*s++);
	return (0);
}
