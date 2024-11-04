#include "main.h"
#include <stddef.h>

/**
 * _strstr - function to find the first occurrence of the substring
 * @haystack: the string
 * @needle: the substring
 *
 * Return: the pointer to the beginning of the licated substring or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	int c = 0;

	while (needle[c] != '\0')
		c++;

	while (*haystack)
	{
		for (i = 0; needle[i]; i++)
		{
			if (haystack[i] != needle[i])
				break;
		}
		if (i != c)
			haystack++;
		else
			return (haystack);
	}
	return (NULL);
}
