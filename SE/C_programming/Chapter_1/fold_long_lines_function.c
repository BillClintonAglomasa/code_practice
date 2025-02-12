#include <stdio.h>

/**
 * fold_long_lines - A function that fold long lines into two or more
 *
 * Return: Nothing
 *
 * Description: Takes an input line and then breaks it into two or more lines
 */

void fold_long_lines(int m_count)
{
	/** Declaration of variables */
	int c, column_count;

	/** Initialization of variables */
	column_count = 0;


	/** Check if it is a line */
	while ((c = getchar()) != EOF)
		{
			column_count++;
			if ((c == '\n') && (column_count < m_count))
			{
				putchar('\n');
				column_count = 0;
			}

			if (column_count > m_count)
			{
			}
			putchar(c);
		}
}
