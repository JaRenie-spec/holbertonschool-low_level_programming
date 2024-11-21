#include <stdlib.h>

/**
 * print_name - functin that prints name
 * @f: function pointer
 * @name: the name to be printed
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)
	{
		return;
	}
	f(name);
}
