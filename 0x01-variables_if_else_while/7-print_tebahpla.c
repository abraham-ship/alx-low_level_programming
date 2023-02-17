#include <stdio.h>

/**
 * main - prints alphabet in reverse
 * Return: 1 if program fails. 0 otherwise.
*/
int main(void)
{
	char x;

	for (x = 'z'; x >= 'a'; x--)
		putchar(x);
	putchar('\n');
	return (0);
}
