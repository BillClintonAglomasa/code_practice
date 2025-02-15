#include <stdio.h>

#define WORD_IN 1
#define WORD_OUT 0

/**
 * fold_long_lines - A function that fold long lines into two or more
 *
 * @m_count: An integer of of the number of columns a line should not exceed
 *
 * Return: Nothing
 *
 * Description: Takes an input line and then breaks it into two or more lines
 */

void fold_long_lines(int m_count)
{
	/** Declaration of variables */
	int c, column_count, state;

	/** Initialization of variables */
        column_count = 0, state = WORD_OUT;


	while ((c = getchar()) != EOF)
	{
		if (c == ' ' || c == '\t' || c == '\n')
		{
			state = WORD_OUT;
			if (column_count >= m_count)
			{
				putchar('\n');
				column_count = 0;
			}

			else
			{
				putchar(c);
				column_count++;
			}
		}

		else
		{
			if (column_count >= m_count)
			{
				putchar('-');
				putchar('\n');
				column_count = 0;
			}

			putchar(c);
			column_count++;
			state = WORD_IN;
		}
	}
}
