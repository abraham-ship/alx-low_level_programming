#include "main.h"

/**
 * _strpbrk - a function that searches a string for any of a set of bytes.
 * @s: occurence being searched.
 * @accept: string to be searched.
 * Return:pointer to bytes or NULL.
 */
char *_strpbrk(char *s, char *accept)
{
	const char *scanp;
	int c, sc;

	while ((c = *s++) != 0)
	{
		for (scanp = accept; (sc = *scanp++) != 0;)
			if (sc == c)
				return ((char *)(s - 1));
	}
	return (0);
}
