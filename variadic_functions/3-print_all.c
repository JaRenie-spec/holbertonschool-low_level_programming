#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

/**
 * print_char - print a character
 * @ap: list of function
 */

void print_char(va_list ap)
{
	printf("%c", va_arg(ap, int));
}

/**
 * print_int - print an int
 * @ap: list of function
 */

void print_int(va_list ap)
{
	printf("%i", va_arg(ap, int));
}

/**
 * print_float - print a float
 * @ap: list of function
 */

void print_float(va_list ap)
{
	printf("%f", va_arg(ap, double));
}

/**
 * print_string - print a string
 * @ap: list of function
 */

void print_string(va_list ap)
{
	char *s = va_arg(ap, char *);

		if (!s)
	{
		printf("nil");
		return;
	}
	printf("%s", s);
}

/**
 * print_all - function that print everything
 *
 * @format: the string to print
 *
 */

void print_all(const char *const format, ...)
{
	va_list ap;
	int i = 0, j;
	char *c = "";

	print_type spec[] = {
	{"%c", print_char},
	{"%i", print_int},
	{"%f", print_float},
	{"%s", print_string},
	{NULL, NULL}
};

va_start(ap, format);

while (format && format[i])
{
	j = 0;
	while (spec[j].spec)
	{
		if (format[i] == spec[j].spec[1])
		{
			printf("%s", c);
			spec[j].f(ap);
			c = ", ";
		}
		j++;
	}
	i++;
}
printf("\n");
va_end(ap);
}
