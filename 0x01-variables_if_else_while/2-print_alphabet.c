#include <stdio.h>

/**
 * main - prints alphabet in lowercase
 * Return: 1 if program fails. 0 otherwise.
*/
int main(void)
{
	for (int x = 'A'; x <= 'Z'; x++)
	{
		putchar(tolower(x));
	}
	return (0);
}
