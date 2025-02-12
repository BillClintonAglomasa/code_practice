#include <stdio.h>

/** Maximum column count that makes a line */
#define M_COUNT 20

/**
 * fold_long_lines - A function that fold long lines into two or more
 *
 * Return: Nothing
 *
 * Description: Takes an input line and then breaks it into two or more lines
 */

int fold_long_lines(void)
{
	/** Declaration of variables */
	int c, column_count;

	/** Initialization of variables */
	column_count = 0;


	/** Check if it is a line */
	while ((c = getchar()) != EOF)
		{
			column_count++;
			if ((c == '\n') && (column_count < M_COUNT))
			{
				putchar('\n');
				column_count = 0;
			}

			if (column_count > M_COUNT)
			{}
			
			putchar(c);
		}
}
