#include <stdio.h>

#define MAXLINE 1000 /** Maximum input line size */

/** Function prototypes */
int get_line (char s[], int max_length);
void copy(char to[], char from[]);

/**
 * main - Entry to program
 *
 * Return: Always 0
 *
 * Defintion: A program that read lines and prints out the longest of them
 */

int main(void)
{
	/** Declaration of variables */
	int len;
	int max;
	char line[MAXLINE];
	char longest[MAXLINE];

	/** Initialization of variable */
	max = 0;

	/** Checks the length of line, sets it to max if it is longer than
	 *  previous line
	 */
	while ((len = get_line(line, MAXLINE)) > 0)
		if (len > max)
		{
			max = len;
			copy(longest, line);
		}
	if (max > 0)
		printf("\nThe longest line is: %s\n", longest);
	return 0;
}

/**
 * getline - A function to reads a line and returns the length
 *
 * @s: An array that stores the character string of a line
 * @lim: The maximum character length of the line
 *
 * Return: Returns the length of the line
 *
 * Description: A function that takes a string array and an integer
 *              as the maximum length of the line and returns the length
 */

int get_line(char s[], int lim)
{
	int c, i;

	for (i = 0; i < lim -1 && (c = getchar()) != EOF && c!= '\n'; ++i)
		s[i] = c;

	if (c == '\n')
	{
		s[i] = c;
		++i;
	}
	s[i] = '\0';

	return i;
}

/**
 * copy - A function to copies a line from one array to another array
 *
 * @to: An array that stores the character string that is copied
 * @from: An array that stores the character string of a line to be copied
 *
 * Return: Returns nothing
 *
 * Definition: A function that takes two arrays, coping the character string
 *             from one of the array to the other array and returns nothing
 */

void copy(char to[], char from[])
{
	int i;

	i = 0;
	while ((to[i] = from[i]) != '\0')
		++i;
}
