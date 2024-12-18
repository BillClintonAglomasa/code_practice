#include <stdio.h>

# define IN 1 /** Inside a word */
# define OUT 0 /** Outside a word */

/**
 * main - Entry to program
 *
 * Return: Always (0)
 *
 * Description: A program that count characters, lines and words
 */

int main(void)
{
	/** Declare variables */
	int c, n1, c1, w1, state;

	/** Initialize variables */
	n1 = c1 = w1 = 0;
	state = OUT;

	/** Count characters, lines and words */
	while ((c = getchar()) != EOF)
	{
		/** Count characters */
		++c1;

		if (c == '\n')
			++n1;

		if (c == '\n' || c == ' ' || c == '\t')
			state = OUT;
		else if (state == OUT)
		{
			state = IN;
			++w1;
		}
	}

	printf("\n%d, %d, %d\n", c1, n1, w1);

	return (0);
}
