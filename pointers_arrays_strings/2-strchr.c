#include "main.h"

/**
 * _strchr - function that locates a character in a string.
 *
 * Return: s or 0 if the character is not found.
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (0);
}
