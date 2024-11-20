#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - function for additioning
 * @a: integer a
 * @b: integer b
 * Return: the sum
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function to substract.
 * @a: integer a
 * @b: integer b
 * Return: the sum
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function to multiply
 * @a: integer a
 * @b: integer b
 * Return: the sum
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function to divise
 * @a: integer a
 * @b: integer b
 * Return: the sum
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - function to modulo
 * @a: integer a
 * @b: integer b
 * Return: the sum
 */
int op_mod(int a, int b)
{
	return (a % b);
}
