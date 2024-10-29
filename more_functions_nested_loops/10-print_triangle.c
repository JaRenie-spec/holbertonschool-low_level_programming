#include "main.h"

/**
 * print_triangle - print a triangle
 * @size: the size of the triangle
 */

void print_triangle(int size)
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
			for (j = 0; j < size; j++)
			{
				if (j < size - n - 1)
				_putchar(' ');
				else
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
