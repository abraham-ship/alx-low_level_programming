#include "main.h"

/**
 * puts2 - print every other character
 * @str: string to be printed
 */
void puts2(char *str)
{

	while (*str != '\0')
	{
		_putchar(*str);
		str+=2;
	}
	_putchar('\n');
}
