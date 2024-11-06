#include "main.h"

/**
 * my_sqrt_recursion - This is my my_sqrt_recursion
 *                     function about the square root
 * @a: The entry is equal to n, of the before function
 * @b: This is the sum
 *
 * Return: This is the result
 */
int my_sqrt_recursion(int i, int j)
{
	if (i == (j * j))
		return (j);
	else if ((j * j) >= i)
		return (-1);
	else
		return (my_sqrt_recursion(i, j + 1));
}

/**
 * _sqrt_recursion - This is my first function
 * @n: This is my value
 *
 * Return: This is my result of the function my_sqrt_recursion
 */
int _sqrt_recursion(int n)
{
	if (n <= 0)
		return (-1);
	return (my_sqrt_recursion(n, 0));
}
