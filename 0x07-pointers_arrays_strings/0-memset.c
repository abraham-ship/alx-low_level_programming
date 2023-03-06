#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte.
 * @s: memory area pointed to by s
 * @b: constant byte b
 * @n: bytes to fill
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{

	while (n > -1)
	{
		*s++ = b;
		--n;
	}
	return (s);
}
