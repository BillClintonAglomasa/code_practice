#include <stdio.h>

/** Macros that define a state where one is either encountering space characters
 */
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
	int i, j, c, wcount, wspace, array[10];

	/** Initialize variables */
	wspace = SPACEOUT;
	wcount = 0;

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

				/** Word length */
				if (wcount > 0 && wcount < 10)
					++array[wcount - 1];

				else if (wcount >= 10)
					++array[9];

				wcount = 0;
			}

		}
		else if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		{
			putchar(c);
			wspace = SPACEOUT;
			++wcount;
		}
	}

	if (wcount > 0)
		{
			if (wcount < 10)
				++array[wcount -1];
			else
				++array[9];
		}

		for (i = 0; i < 10; ++i)
		{
			printf("%d", i + 1);

			for (j = 0; j < array[i]; ++j)
				putchar('*');
			putchar('\n');
		}

		return 0;
}
