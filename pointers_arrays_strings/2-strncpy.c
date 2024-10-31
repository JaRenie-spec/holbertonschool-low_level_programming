#include "main.h"

/**
 * _strncpy - concatenates two string with n.
 * @dest: destination
 * @src: the string
 * @n: bytes from src
 * Return: the pointer to the resulting.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; n > i; i++)
		dest[i] = '\0';

	return (dest);
}
