#include "main.h"


/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: string to be printed.
 */
void puts_half(char *str)
{
	int i = 0, k, m;

	while (str[i] != '\0')
		i++;
	if (i % 2 != 0)
	{
		int n, j;

		n = (i - 1) / 2;
		for (j = n; j < i - 1; j++)
			_putchar(str[j + 1]);
	}
	else
	{
		k = i / 2;
		for (m = k; m < i; m++)
			_putchar(str[m]);
	}

	_putchar('\n');
}
