#include <stdio.h>

/**
 * main - Entry point to program
 *
 * Return: Always return (0)
 *
 * Defintion: To Verify the expression, getchar() != EOF is 0 or 1
 */

int main(void)
{
	/**Declaring variables*/
	long int c;

	/**Initializing the variables*/
	c = getchar() != EOF;
	printf("%ld\n", c);

	return (0);
}
