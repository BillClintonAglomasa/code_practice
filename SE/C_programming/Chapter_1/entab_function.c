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
	int c, column_position, blank_count, spaces_to_tab;

	/** Initialization of variables */
	column_position = 0;
	blank_count = 0;

	/** If a character is not EOF */
	while ((c = getchar()) != EOF)
	{
		if (c == ' ')
		{
			blank_count++;
		}

		/** If character is not a blank */
		else
		{
			while (blank_count > 0)
			{
				/** Calculate the no of spaces to the next tab */
				spaces_to_tab = tabstop - (column_position % tabstop);

				if (blank_count >= spaces_to_tab)
				{
					putchar('\t');
					column_position += spaces_to_tab;
					blank_count -= spaces_to_tab;
				}

				else
				{
					putchar(' ');
					column_position++;
					blank_count--;
				}
			}

			if (c == '\n')
				column_position = 0;

			else
				column_position++;

			putchar(c);
		}
	}

	while (blank_count > 0)
	{
		spaces_to_tab = tabstop - (column_position % tabstop);

		if (blank_count >= spaces_to_tab)
		{
			putchar('\t');
			column_position += spaces_to_tab;
			blank_count -= spaces_to_tab;
		}

		else
		{
			putchar(' ');
			column_position++;
			blank_count--;
		}
	}
}
