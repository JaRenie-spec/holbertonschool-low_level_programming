#include "function_pointers.h"

/**
 * print_name - functin that prints name
 * @f: function pointer
 * @name: the function
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == 0)
	{
		return;
	}
	f(name);
}
