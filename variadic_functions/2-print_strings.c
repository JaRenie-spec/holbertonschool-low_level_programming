#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 *
 *
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *s;


	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(ap, char *);

		if (s == NULL)
			printf("nil");

		else
			printf ("%s", s);
			
		if (separator != NULL && i != n - 1)
			printf("%s", separator);

	}
	printf("\n");
	va_end(ap);
}