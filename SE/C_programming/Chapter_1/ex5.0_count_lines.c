#include <stdio.h>

/**
 * main - Entry to program
 *
 * Return: Always return (0)
 *
 * Definition: A program that counts number of lines using a while loop
 */

int main(void)
{
	/** Declare variables */
	int c, n1;

	while ((c = getchar()) != EOF)
		if (c == '\n')
				++n1;
	printf("\n%d\n", n1);

	return (0);
}
