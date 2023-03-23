#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - a function that prints everything
 * @format: a list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list pa;
	unsigned int i = 0;
	char *s, *sep = "";

	if (format)
	{
		va_start(pa, format);
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sep, va_arg(pa, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(pa, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(pa, double));
					break;
				case 's':
					s = va_arg(pa, char *);
					if (!s)
						s = "(nil)";
					printf("%s%s", sep, s);
					break;
				default:
					i++;
					continue;
			}
			sep = ", ";
			i++;
		}
		va_end(pa);
	}
	printf("\n");
}
