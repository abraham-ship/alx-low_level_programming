#include "main.h"
#include <stdlib.h>

/**
 * str_concat - a function that concatenates two strings.
 * @s1:first string
 * @s2: second string
 * Return: pointer to array
 */
char *str_concat(char *s1, char *s2)
{
	char *p;

	int i = 0, j = 0, k, l;

	if (s1 == NULL)
		s1 = "";
	if (s2 ==  NULL)
		s2 = "";
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	p = malloc(sizeof(char) * i + j + 1);
	if (p == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
		p[k] = s1[k];
	for (l = 0; l < j; l++, k++)
		p[k] = s2[l];
	p[k] = '\0';

	return (p);
	free(p);
}
