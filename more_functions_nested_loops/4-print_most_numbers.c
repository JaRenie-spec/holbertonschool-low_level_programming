#include "main.h"

/**
 * print_most_numbers - print numbers from 0 to 9
 * do no print 2 and 4
 *
 */

void print_most_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
		if (num != 2 && num != 4)
		{
			_putchar(num + '0');
		}
	_putchar('\n');
}
