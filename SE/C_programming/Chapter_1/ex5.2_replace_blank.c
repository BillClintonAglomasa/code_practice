#include <stdio.h>

/**
 * main - Entry of program
 *
 * Return: Always 0
 *
 * Definition: A program that copy its input to ouput, replacing each string of
 * one or more blanks by a single blank.
 */

int main(void)
{
	/** Declare variables */
	int c, blank_count;

	/** Initialize variable */
	blank_count = 0;

	/** Copy input to output */
	while ((c = getchar()) != EOF)
	{
		if (c == ' ')
		{
			if (!blank_count)
			{
				putchar(c);
				blank_count = 1;
			}
		}

		else
		{
			putchar(c);
			blank_count = 0;
		}
	}

	return (0);
}
