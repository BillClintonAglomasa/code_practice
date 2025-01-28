#include <stdio.h>

/**
 * main - Entry point of program
 *
 * Return: Always 0
 *
 * Description: This replaces tabs in the input with the proper number of blanks
 *              to sapce to the next tab stop.
 */

int main(void)
{
	/** Declaration of variables */
	int c;

	/** Initialization of variables */

	while ((c = getchar()) != EOF)
	{
		if (c == '\t')
			;
		putchar(c);
	}
	return (0);
}
