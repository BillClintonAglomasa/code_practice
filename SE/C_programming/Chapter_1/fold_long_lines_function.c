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
	int c, column_count, state, word_count;
	int current_line;

	/** Initialization of variables */
	column_count = 0;
	word_count = 0;


	/** Check if it is a line */
	while ((c = getchar()) != EOF)
		{
			column_count++
			if ((c >= 'a' || c <= 'z') && (c >= 'A' || c <= 'Z'))
			{
				state = WORD_IN;
				word_count++;

				/** Check if line exceeds 20 columns */
				current_line = column_count + word_count;

				if (current_line < m_count)
					putchar(c);
			}
			
			if ((c == '\n') && (column_count < m_count))
			{
				putchar('\n');
				column_count = 0;
			}

			if (column_count > m_count)
			{
				putchar('\n');
				column_count = 0;
			}
			putchar(c);
		}
}
