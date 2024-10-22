#include <stdio.h>

/**
 * main - print single digit of base 10
 * starting to 0.
 *
 * Return: always 0.
 */


int main(void)

{

	int x;

	for (x = 0; x < 10; x++)
	{
		putchar(x + '0');
		if (x < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
