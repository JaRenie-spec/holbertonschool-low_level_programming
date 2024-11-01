#include "main.h"

/**
 * leet - encode a string into 1337
 * @str: the string to encode.
 * Return: str
 */

char *leet(char *str)
{
	int i = 0;
	char a[5] = { 'a', 'e', 'o', 't', 'l'};
	char n[5] = { 4, 3, 0, 7, 1};

	while (*str)
	{
		for (i = 0; i < 5; i++)
		{
			if (*str == a[i] || *str == a[i] - 32)
				*str = n[i] + '0';
		}
		str++;
	}
	return (str);
}
