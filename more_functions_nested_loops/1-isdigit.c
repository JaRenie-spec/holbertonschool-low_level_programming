#include "main.h"

/**
 * _isdigit - check for a digit
 * @c: the digit to check
 *
 * Return: 1 if digit, 0 otherwise.
 */

int _isdigit(int c)

{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}

	return (0);
}
