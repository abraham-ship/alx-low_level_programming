#include "main.h"

/**
 * _strncat - a function that concatenates two strings. except that
 * it will use at most n bytes from src and,
 * src does not need to be null-terminated if it contains n or more bytes
 * @dest: first string
 * @src: second string
 * @n: bytes
 * Return: concatenated string.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	return (dest);
}
