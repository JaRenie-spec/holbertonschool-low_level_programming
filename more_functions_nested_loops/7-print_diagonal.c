#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 *
 */

void print_diagonal(int n)
{
	int d, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (d =0; d < n; d++)
		{
			for (j = 0; j < d; j++)
				{
					_putchar(' ');
				}
			_putchar(92);
			_putchar('\n');
		}
	}
}
