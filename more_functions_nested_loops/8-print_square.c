#include "main.h"

/**
 * print_square - function that prints a square.
 * @size: the size of the square
 *
 */

void print_square(int size)
{
	int n, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (n = 0; n < size; n++)
		{
			for (j = 1; j < size; j++)
			{
			_putchar(35);
			}
			_putchar(35);
			_putchar('\n');
		}
	}
}
