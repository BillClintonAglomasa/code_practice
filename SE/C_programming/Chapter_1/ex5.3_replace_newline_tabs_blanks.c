#include <stdio.h>

/**
 * main - Entry to program
 *
 * Return: Always 0
 *
 * Definition: A program that copies from input to output, replacing newline,
 * tabs and blanks with '\n', '\t' and ' ' respectively.
 */

int main(void)
{
	/** Declare variables */
	int c;

	/** Copy input to output unless it is EOF */
	while ((c = getchar()) != EOF)
	{
		if (c == '\n')
		{
			putchar('\\');
			putchar('n');
		}

		if (c == '\t')
		{
			putchar('\\');
			putchar('t');
		}

		if (c == ' ')
		{
			putchar('\\');
			putchar('b');
		}

		else
			putchar(c);
	}

	return (0);
}
