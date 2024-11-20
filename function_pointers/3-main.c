#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>

/**
 * @b
 *
 * @return int
 */

int main(int argc, char *argv[])
{
	char *op;
	int calc;
	int num1, num2;

	if (argc > 4)
	{
		printf("error\n");
		exit (98);
	}
	if (argv[2] != op)
	{
		printf("error\n");
		exit (99);
	}
	printf("%d\n", calc);
}
