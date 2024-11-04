#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: the initial segment
 * @accept: the second segment
 * Return: c the number of byte.
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, k;
	int c = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (k = 0; accept[k]; k++)
		{
			if (s[i] == accept[k])
			{
				c++;
				break;
			}
		}
		if (s[i] != accept[k])
		{
			return (c);
		}
	}
	return (c);
}
