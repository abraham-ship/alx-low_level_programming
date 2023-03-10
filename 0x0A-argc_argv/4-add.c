#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - a program that adds positive numbers.
 * @argc: command line arguments
 * @argv: pointer to arguments
 * Return: 1 on error. 0 otherwise
 */
int main(int argc, char *argv[])
{
	int i, sum = 0, j = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			for (; argv[i][j] != '\0'; j++)
			{
				if (argv[i][j] >= '0' && argv[i][j] <= '9')
					continue;
				else
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	else
		printf("0\n");
	return (0);
}
