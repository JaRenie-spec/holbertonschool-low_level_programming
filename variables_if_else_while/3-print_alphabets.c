#include <stdio.h>

/**
 * main - program that print the alaphabet,
 * in lowercase and then in uppercase
 *
 * Return: Always 0
 */

int main(void)

{
	char lowercase, uppercase;


	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
	{
		putchar(lowercase);
	}
	for (uppercase = 'A'; uppercase <= 'Z'; uppercase++)
	{
		putchar(uppercase);
	}

	putchar('\n');

	return (0);
}
