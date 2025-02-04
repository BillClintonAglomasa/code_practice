#include <stdio.h>

/**
 * entab_function - A function that replaces blanks with tab
 *
 * @tabstop: An integer that represents the number of blanks that make a tabstop
 *
 * Return: Nothing
 *
 * Description: A function that takes an integer as a tabstop and uses that to
 *              replace the number of blanks with a tab.
 */

void entab_funciton(int tabstop)
{
	/** Declaration of variables */
	int c, column_position, blank_count;

	/** Initialization of variables */
	column_position = 0;
	blank_count = 0;

	while ((c = getchar()) != EOF)
	{
		if (c == ' ')
		{
			blank_count++;
		}

		else
		{}
	}
}
