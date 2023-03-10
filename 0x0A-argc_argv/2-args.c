#include <stdio.h>

/**
 * main - a program that prints all arguments it receives.
 * @argc: command line arguments
 * @argv: pointer to arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	(void) argc;
	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
