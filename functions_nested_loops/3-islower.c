#include "main.h"

/**
 *_islower - checks for lowercase character.
 * @c: the character to check.
 *
 * Return: 1 for lowercase charactere, otherwise 0.
 */

int _islower(int c)

{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}

	return (0);
}
