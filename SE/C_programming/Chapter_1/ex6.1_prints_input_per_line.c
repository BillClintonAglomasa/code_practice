#include <stdio.h>

#define IN 1 /** State when you encounter a blank, tab or newline */
#define OUT 0 /** State when out of a word */

/**
 * main - Entry to program
 *
 * Return: Always 0
 *
 * Description: A program that prints words from it's input per line
 */

int main(void)
{
	/** Declaration of variables */
	int c, word_state, blank_state;

	/** Initialize variables */
	blank_state = OUT;

	/** If not an EOF, print word on a line */
	while ((c = getchar()) != EOF)
	{
		/** Check if character is blank, tab or newline */
		if (c == ' ' || c == '\t' || c == '\n')
		{
			/** If blank, tab or newline, go to blank state */
			if (blank_state == OUT)
			{
				putchar('\n');
				blank_state = IN;
			}
		}
		else
		{
			/** Get out of state & print the characters to screen */
			blank_state = OUT;
			putchar(c);
		}
	}

	return (0);
}
