#include <stdio.h>

/** Maximum number of characters */
#define MAXLINE 1000

/** Declaration of external variables */
int max;
char line[MAXLINE];
char longest[MAXLINE];

/** Function prototype */
int my_getline(void);
void copy(void);

int main(void)
{
	/** Declaration of variables */
	int len;
	extern int max;
	extern char longest[];

	/** Initialization */
	max = 0;

	while ((len = my_getline()) > 0)
		if (len > max)
		{
			max = len;
			copy();
		}

	if (max > 0)
		printf("%s", longest);
	return 0;
}

/**
 * get_line - A function that reads characters on a line and returns the length
 *
 * Return: An integer of the length of the longest line
 *
 * Description: This is a function that takes no arguments and uses external
 *              variables to read and returns the length of the line
 */

int get_line(void)
{
	/** Declaration of variables */
	int i;
	extern char line[];

	/** Checks for conditions for a line and appends null terminator */
	for (i = 0; i < MAXLINE - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
		line[i] = c;


	if (c == '\n')
	{
		line[i] = c;
		++i;
	}

	line[i] = '\0';

	return (i);
}
