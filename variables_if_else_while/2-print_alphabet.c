#include <stdio.h>

/**
 *main - printing the alphabet in lower case.
 *
 *return: always 0.
 */


int main(void)
{
	/**
	 * Declare a variable with the first member of the range [a-z].

	 */

	char alphabet;

	/**
	 *check to see if the current value of your variable
	 *is less thanor the same as the last member (z)
	 *of the given range. While the value is less
	 *go ahead and print the value.
	*/

for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
	putchar(alphabet);
}

putchar('\n');

return (0);
}
