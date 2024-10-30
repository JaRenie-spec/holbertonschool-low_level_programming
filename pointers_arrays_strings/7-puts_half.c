#include "main.h"
#include "2-strlen.c"

/**
 * puts_half - print half of the string.
 * @str: the string.
 *
 */

void puts_half(char *str)
{
	int i;
	int len = _strlen(str);
	int start = len / 2;

	if (len % 2 != 0)
	{
		start++;
	}

	for (i = start; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
