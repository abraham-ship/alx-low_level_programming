#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet ten times in lowercase
 */
void print_alphabet_x10(void)
{
	char x;
	int counter = 0;

	while (counter < 10)
	{
		for (x = 'a'; x <= 'z'; x++)
			_putchar(x);

		_putchar('\n');
		counter++;
	}
}
