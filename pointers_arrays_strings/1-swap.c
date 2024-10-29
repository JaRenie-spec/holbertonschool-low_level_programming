#include "main.h"

/**
 * swap_int - function to swaps value
 * @a: integer a
 * @b: integer b
 */

void swap_int(int *a, int *b)
{
	int c = 0;

	c = *b;
	*b = *a;
	*a = c;
}
