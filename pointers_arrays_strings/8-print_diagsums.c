#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function that prints the sum
 * of two diagnonals of a square maxtrix on integers.
 * @a: the pointer
 * @size: the integer.
 */

void print_diagsums(int *a, int size)
{
	int i = 0;
	int j = 1;
	int sum = 0;
	int sum1 = 0;

	while (i < size)
	{
		sum = sum + a[(size + 1) * i];
		sum1 = sum1 + a[(size - 1) * j];
		i++;
		j++;
	}
	printf("%d, %d\n", sum, sum1);
}
