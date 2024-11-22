#ifndef _ROBIN_h
#define _ROBIN_h
#include <stdarg.h>

typedef struct type
{
	char *spec;
	void (*f)(va_list ap);
}print_type;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
