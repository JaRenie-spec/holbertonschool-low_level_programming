#include <stdio.h>

/**
 * main - print all possible combinations
 * of single-digit numbers.
 *
 */

int main(void)

{

	int x;

	for (x = 0; x < 10; x++)
	{
		putchar(x + '0');
		if (x == 9)
			break;
		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
