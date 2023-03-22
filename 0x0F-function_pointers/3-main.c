#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - test my code
 * @argc: command line arguments
 * @argv: pointer to arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int num1, num2, (*fn)(int, int);

	if (argc != 4)
	{
		puts("Error");
		return (98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	if (num2 == 0 && (*argv[2] == '/' || *argv[2] == '%'))
	{
		puts("Error");
		return (100);
	}
	fn = get_op_func(argv[2]);
	if (fn == NULL)
	{
		puts("Error");
		return (99);
	}
	printf("%d\n", fn(num1, num2));
	return (0);
}
