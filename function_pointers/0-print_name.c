#include <stdlib.h>

/**
 * print_name - functin that prints name
 * @f: function pointer
 * @name: the name to be printed
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	f(name);
}
