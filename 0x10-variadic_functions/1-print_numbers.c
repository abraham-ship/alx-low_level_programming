#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * @separator: string to be printed between numbers
 * @n: number of intergers passed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list an;
	unsigned int i;

	va_start(an, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(an, int));
		if (separator && i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
}
