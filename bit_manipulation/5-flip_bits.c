#include "main.h"

/**
 * flip_bits - function that returns the number of bits you would need to flip
 * to get from one number to another
 * @n: number 0
 * @m: number 1
 * Return: the flip of the numbers.
 */


unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int flip = 0, num, num1;

	while (!(n == 0 && m == 0))
	{
		num = n & 1;
		num1 = m & 1;
		n = n >> 1;
		m = m >> 1;
		if (num != num1)
			flip += 1;
	}
	return (flip);
}
