#include "main.h"

/**
 * set_bit - function that sets the value of a bit to 1 at a given index
 * @n: the number to set
 * @index: the index, starting from 0 of the bit you want to set
 * Return: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	int num;

	if (index > 63)
		return (-1);
	num = 1 << index;
	*n = *n | num;
	return (1);
}
