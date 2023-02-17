#include <stdio.h>

/**
 * main - prints alphabet in lowercase
 * Return: 1 if program fails. 0 otherwise.
*/
int main(void)
{
	char x;
	for (x = 'a'; x <= 'z'; x++)
		putchar(x);
	putchar('\n');
	return (0);
}
