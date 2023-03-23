#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - a function that prints strings
 * @separator: string to be printed between the strings
 * @n: number of strings passed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ps;
	unsigned int i;
	char *str;

	va_start(ps, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(ps, char *);
		if (!str)
			printf("(nil)");
		printf("%s", str);
		if (separator && i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ps);
}
