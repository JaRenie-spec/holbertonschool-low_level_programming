#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: string
 * Return: 0
 */

int _atoi(char *s)
{
	int i = 0;
	int j = 0;

	while (*s != '\0')
	{
		if (*s > 47 && *s < 58)
		{
			i = i * 10 + *s - '0';
			if (*(s + 1) < 47 || *(s + 1) > 58)
				break;
		}
		else if (*s == '-' && *(s + 1) > 47 && *(s + 1) < 58)
			j = 1;

		s++;
	}
	if (j > 0)
		j *= -1;
	return (*s);
}
