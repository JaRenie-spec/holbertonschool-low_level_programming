#include "main.h"

/**
 *_isalpha - check for alphabetic charactere.
 *@c: character checked
 *
 * Return: 1 for alphabetic character, otherwise 0.
 */

int _isalpha(int c)

{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}

	return (0);
}
