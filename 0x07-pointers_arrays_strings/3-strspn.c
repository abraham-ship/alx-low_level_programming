#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring.
 * @s: string to be searched
 * @accept: segment to be searched in string
 * Return: bytes of segment found.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (accept[j] == s[i])
				break;
		}
		if (!accept[j])
			break;
	}
	return (i);
}
