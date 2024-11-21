#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_strings - fucntion that print a strings.
 * @n: the number of argument
 * @separator:the string to be printed between words.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *s;


	va_start(ap, n);

	if (n == 0)
		printf("\n");

	for (i = 0; i < n; i++)
	{
		s = va_arg(ap, char *);

		if (s == NULL)
			printf("nil");

		else
			printf("%s", s);

		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
