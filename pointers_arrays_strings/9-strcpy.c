#include "main.h"

/**
 * _strcpy - copies a string.
 * @dest: the destination
 * @src: the original to copy.
 * Return: value of the pointer
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';

	return (dest);
}
