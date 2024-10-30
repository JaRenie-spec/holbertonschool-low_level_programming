#include "main.h"
#include "2-strlen.c"
/**
 * rev_string - print tring of char in reverse
 * @s: character tested
 */

void rev_string(char *s)
{
	int first = 0;
	int last = _strlen(s) - 1;
	char tmp;

	while (first < last)
	{
	tmp = s[first];
	s[first] = s[last];
	s[last] = tmp;

	first++;
	last--;

	}
}
