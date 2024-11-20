#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>

/**
 * main - program to find an operation
 * @argc: number of argument
 * @argv: list of argument
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int (*fptr)(int, int);

	if (argc > 4)
	{
		printf("error\n");
		exit (98);
	}

	fptr = get_op_func(argv[2]);

	if (fptr == NULL)
	{
		printf("error\n");
		exit (99);
	}
	printf("%d\n", fptr(atoi(argv[1]), atoi(argv[3])));
	return (0);
}