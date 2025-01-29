#include <stdio.h>

/**
 * detab_function - A function to replaces tabs with the right number of spaces
 *
 * Return: Nothing
 *
 * Description: This is a function that takes in an integer of the number of
 *              spaces needed to replace a tab. It then moves the column to
 *              the next stop by calculating the number from the previous tab
 *              stop and then adds the required space to format the text.
 */

void detab_function(int tabstop)
{
	/** Declaration of variables */
	int c, i, column_position, spaces;

	/** Initialization of variables */
	i = column_position = 0;

	/** Check if character is not EOF */
	while ((c = getchar()) != EOF)
	{
		if (c == '\t')
		{
			spaces = tabstop - (column_position % tabstop);
			while (i < spaces)
			{
				putchar(' ');
				++i;
				++column_position;
			}
		}
		else
		  {
			  putchar(c);
			  ++column_position;
			  if (c == '\n')
				  column_position = 0;
		  }
	}
}
