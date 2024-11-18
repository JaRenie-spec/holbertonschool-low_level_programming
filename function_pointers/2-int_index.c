#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 * @size: the number of elements in the array
 * @cmp: pointer to the function
 *
 * Return: the index of the first element if cmp isn't 0
 * if no element matches or size inferior to 0 return -1
 *
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return(-1);
	}
	for (i = 0; i < size; i++)
		if (cmp(array[i]) != 0)
			return(i);
	return(-1);
}
