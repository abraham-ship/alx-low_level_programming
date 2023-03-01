#include "main.h"

/**
 * _strncpy - a function that copies a string.
 * @dest: destination of string
 * @src: string to be copied
 * @n: bytes of src
 * Return: copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
