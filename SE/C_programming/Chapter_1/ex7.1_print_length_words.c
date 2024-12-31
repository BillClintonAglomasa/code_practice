#include <stdio.h>
#define SPACEIN 1
#define SPACEOUT 0

/**
 * main - Entry to program
 *
 * Return: Always 0
 *
 * Defintion: A program that prints a histogram of the lenght of words in it's
 *            input
 */

int main(void)
{
	/** Declaration of variables */
	int i, c, wspace, array[10];

	/** Initialize variables */
	wspace = SPACEOUT;

	/** For loop to loop through array to set values */
	for (i = 0; i < 10; ++i)
		array[i] = 0;

	/** While loop to check for EOF and characters */
	while ((c = getchar()) != EOF)
	{
		if (c == ' ' || c == '\n' || c == '\t')
		{
			if (wspace == SPACEOUT)
			{
				putchar('\n');
				wspace = SPACEIN;
			}

		}
		else if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		{
			putchar(c);
			wspace = SPACEOUT;
		}
	}
	return 0;
}
