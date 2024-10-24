#include "main.h"

/**
 * print_alphabet_x10 - print alphabet ten times.
 *
 * Return: void
 */

void print_alphabet_x10(void)

{
	char alphabet;
	int n = 0;

	while (n <= 9)

	{
		for (alphabet = 'a' ; alphabet <= 'z' ; alphabet++)

		{
			_putchar(alphabet);
		}

		_putchar ('\n');

		n++;
	}
}
