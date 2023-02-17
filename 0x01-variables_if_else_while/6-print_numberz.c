#include <stdio.h>

/**
 * main - prints single digits of base 10
 * Return: 1 if program fails. 0 otherwise.
*/
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar(num + '0');
	}
	putchar('\n');

	return (0);
}
