#include <stdio.h>
#define MAXLINE 1000 /** Maximum input line size */
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

	max = 0;
	while ((len = getline(line, MAXLINE)) > 0)
		if (len > max)
		{
			max = len;
			copy(longest, line);
		}
	if (max > 0)
		printf("%s", longest);
	return 0;
}

/**
 * getline - A program to read a line and get the length
 *
 * @s: Holds the lines
 * @lim: The integer of the lenght of the line
 *
 * Description: A program that reads lines from output and returns a
 * line
 */

int getline(char s[], int lim)
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
 * copy - A program to copy input to another
 *
 * @to[]: Destination of the input (string) that is copied
 * @from[]: Source of input (string) to be copied
 *
 * Definition: A program that copies a string from one destination to another
 */

void copy(char to[], char from[]);
