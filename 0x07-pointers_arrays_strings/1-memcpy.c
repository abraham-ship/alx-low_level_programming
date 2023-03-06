#include "main.h"

/**
 * _memcpy - a function that copies memory area.
 * @dest: memory area to be copied
 * @src: memory area to be copied from
 * @n: bytes to copied
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)

{
	while (n--)
		*dest++ = *src++;
	return (dest);
}
