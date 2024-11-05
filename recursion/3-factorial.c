#include "main.h"

/**
 * factorial - function that returns the factorail of a given number
 * @n: the number
 *
 * Return: the factorial number
 */

int factorial(int n)
{
	if (n == 0)
		return (1);

	else if (n < 0)
		return (-1);

	else
		return (n * factorial(n - 1));
}
