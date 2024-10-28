#include "main.h"

/**
 * more_numbers - print ten times the numbers
 * from 0 to 14 followed by a new line.
 *
 */

void more_numbers(void)
{
	int n;
	int num;

	while (n <= 9)
	{
		for (num = 0; num <= 14; num++)
		{
			if ( num > 9)
			{
			_putchar((num / 10) + '0');
			}
			_putchar((num % 10) + '0');
		}

		_putchar('\n');

		n++;
	}
}
