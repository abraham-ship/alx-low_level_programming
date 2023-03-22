#include "function_pointers.h"

/**
 * print_name - a function that prints a name.
 * @name: string
 * @f: pointer to of string argument
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
