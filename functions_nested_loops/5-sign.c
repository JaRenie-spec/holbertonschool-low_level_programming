#include "main.h"

/**
 * print_sign - print the sign of a number
 * @n: the sign to check
 *
 * Return: 1 if greater than zero, 0 is zero,-1 if less
 */

int print_sign(int n)

{

if (n > 0)
{
_putchar('+');
return (1);
}

else if (n == 0)
{
_putchar('0');
return (0);
}

else
{
_putchar('-');
return (-1);
}
}
