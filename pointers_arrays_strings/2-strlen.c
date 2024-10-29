#include "main.h"

/**
 * _strlen - function to returns the length of a string
 *
 * Return: the length
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;

		s++;
	}

	return length;
}
