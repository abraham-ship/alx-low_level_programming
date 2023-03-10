#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that multiplies two numbers.
 * @argc: command line arguments
 * @argv: pointer to arguments
 * Return: 1 on error, 0 otherwise
 */
int main(int argc, char *argv[])
{
	int mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	mul = (atoi(argv[1]) * atoi(argv[2]));
	printf("%d\n", mul);
	return (0);
}
