#include <stdio.h>

#define MAXLINE 1000 /** Maximum input line size */

/** Function prototypes */

int get_line(char s[], int max_length);
void copy(char to[], char from[]);
void reverse(char s[], int len);
/**
 * main - Entry to program
 *
 * Return: Always 0
 *
 * Defintion: A program that read lines and only print lines greater than 1
 *            character.
 */

int main(void)
{
	/** Declaration of variables */
	int len, max;
	char line[MAXLINE];
	char longest[MAXLINE];

	/** Initialization of variables */
	max = 0;

	/**
	 * Checks the length of line, sets it to max if it is longer than
	 * previous line
	 */
	while ((len = get_line(line, MAXLINE)) > 0)
	{
		if (len > max)
		{
			max = len;
			copy(longest, line);
			printf("\n%d, %s", max, longest);
		}
	}

	return (0);
}

/**
 * get_line - A function that reads line and returns the length
 *
 * @s: An array that stores the input line
 * @lim: The maximum limit of length of the line
 *
 * Return: An integer of the line length
 */

int get_line(char s[], int lim)
{
	int c, i;

	for (i = 0; i < (lim - 1) && (c = getchar()) != EOF && c != '\n'; ++i)
		s[i] = c;

	if (c == '\n')
	{
		s[i] = c;
		++i;
	}
	s[i] = '\0';

	if (i >= 2 && (s[i - 2] == '\n' || s[i -2] == '\t'))
	{
		s[i - 2] = '\0';
		--i;
	}

	else if (i == 1 && (s[i - 1] == '\n'))
	{
		s[0] = '\0';
		i = 0;
	}

	return (i);
}

/**
 * copy - A function to copies a line from one array to another array
 *
 * @to: An array that stores the character string that is copied
 * @from: An array that stores the character string of a line to be copied
 *
 * Return: Returns nothing
 */

void copy(char to[], char from[])
{
	int i;

	i = 0;
	while ((to[i] = from[i]) != '\0')
		++i;
}
