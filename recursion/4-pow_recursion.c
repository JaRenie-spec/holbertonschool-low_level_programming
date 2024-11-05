#include "main.h"

/**
 * _pow_recursion - return the value of 2 integer.
 * @x: the number
 * @y: the power
 * Return: -1 if lower than 0 else return 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
