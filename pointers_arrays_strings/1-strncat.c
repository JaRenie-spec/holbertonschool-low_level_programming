#include "main.h"

/**
 * _strncat - concatenates two string with n.
 * @dest: destination
 * @src: the string
 * @n: bytes from src
 * Return: the pointer to the resulting.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0';)
		i++;
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}
	return (dest);
}
