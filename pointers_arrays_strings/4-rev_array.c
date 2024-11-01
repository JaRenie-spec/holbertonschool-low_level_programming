#include "main.h"

/**
 * reverse_array - function that reverses the content of an array
 * @n: the number of elements of the array
 * @a: the pointer to the array
 */

void reverse_array(int *a, int n)
{
	int i, j;

	j = n - 1;

	for (i = 0; i < n / 2; i++)
	{
		int start, end;

		start = a[i];
		end = a[j];
		a[i] = end;
		a[j] = start;
		j--;
	}
}
