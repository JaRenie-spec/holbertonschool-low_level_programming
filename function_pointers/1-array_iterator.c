#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - function given as parameter on each element of an array
 * @array: the array
 * @size: the size of the array
 * @action: pointer to the function.
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (size == 0)
	{
		return;
	}
	for (i = 0; i < size; i++)
		action(array[i]);
}
