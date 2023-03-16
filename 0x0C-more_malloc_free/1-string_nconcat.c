#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - a function that concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: bytes to allocate from second string
 * Return: pointer to new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i = 0, k = 0, len, len2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
	{
		i++;
		len++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		i++;
		len2++;
	}
	if (n >= len2)
		ptr = malloc(sizeof(char) * (len + len2 + 1));
	else
		ptr = malloc(sizeof(char) * (len + n + 1));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		ptr[k++] = s1[i];
	for (i = 0; s2[i] && i < n; i++)
		ptr[k++] = s2[i];
	ptr[k] = '\0';
	return (ptr);
}
