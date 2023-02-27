#include "main.h"

/**
 * swap_int - swap two intergers.
 * @a: first interger.
 * @b: second interger.
 */
void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
