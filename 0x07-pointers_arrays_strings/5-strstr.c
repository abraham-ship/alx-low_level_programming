#include "main.h"

/**
 * _strstr - a function that locates a substring.
 * @haystack: string to be searched.
 * @needle: substring being searched for.
 * Return: NULL if not found. otherwise return pointer to substring.
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	while (*haystack)
	{
		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
					return (haystack);
				i++;
			} while (haystack[i] == needle[i]);
		}
		haystack++;
	}
	if (needle == '\0')
		return (haystack);
	return (NULL);
}
