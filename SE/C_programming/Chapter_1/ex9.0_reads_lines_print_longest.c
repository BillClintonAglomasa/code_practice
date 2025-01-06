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
