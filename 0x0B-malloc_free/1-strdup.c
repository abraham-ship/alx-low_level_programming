#include "main.h"
#include <stdlib.h>

/**
 * _strdup - a function that returns a pointer to a newly
 * allocated space in memory, which contains
 * a copy of the string given as a parameter
 * @str: string
 * Return: pointer to duplicate string
 */
char *_strdup(char *str)
{
	char *p;
	int i = 0, j;

	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
		i++;
	p = malloc(sizeof(char) * i + 1);
	for (j = 0; j < i; j++)
		p[j] = str[j];
	p[j] = '\0';
	return (p);
	free(p);
}
