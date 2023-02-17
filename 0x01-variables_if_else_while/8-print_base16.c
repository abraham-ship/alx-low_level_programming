#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 * Return: 1 if program fails. 0 otherwise.
*/
int main(void)
{
	int num;
	char letter;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	for (letter = 'a'; letter <= 'f'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
