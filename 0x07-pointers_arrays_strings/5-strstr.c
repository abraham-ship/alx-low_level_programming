#include "main.h"

/**
 * _strstr - a function that locates a substring.
 * @haystack: string to be searched.
 * @needle: substring being searched for.
 * Return: NULL if not found. otherwise return pointer to substring.
 */
char *_strstr(char *haystack, char *needle)
{

	while (*haystack != '\0')
	{
		while (*haystack == *needle && *needle != '\0')
		{
			haystack++;
			needle++;
		}
		if (*needle == '\0')
			return (haystack);
		haystack++;
		return (needle);
	}
	return (NULL);
}
