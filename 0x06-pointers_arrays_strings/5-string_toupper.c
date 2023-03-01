#include "main.h"

/**
 * string_toupper - a function that changes all lowercase letters
 * of a string to uppercase.
 * @sr: pointer to char.
 * Return: changed string.
 */
char *string_toupper(char *sr)
{
	int i;

	while (sr[i] != '\0')
	{
		if (sr[i] >= 'a' && sr[i] <= 'z')
			sr[i] = sr[i] - 32;

		i++;
	}
	return (sr);
}
