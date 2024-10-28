#include "main.h"

/**
 * print_line - function that draws a line
 * @n: number of time "_" should be printed
 * Return: 0 success
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		_putchar('_');
	}
}
