#include <stdio.h>

void start_up(void) __attribute__ ((constructor));
/**
 * start_up - print something before main is executed
 */
void start_up(void)
{
	printf("You're beat! and yet, you must allow,"
		"\nI bore my house upon my back!\n");
}
