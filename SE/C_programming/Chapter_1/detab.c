#include <stdio.h>

#define TABSTOP 4

/** Function prototype */

void detab_function (TABSTOP);

/**
 * main - Entry point of program
 *
 * Return: Always 0
 *
 * Description: This replaces tabs in the input with the proper number of blanks
 *              to sapce to the next tab stop.
 */

int main(void)
{
	/** Calling the tab function to process input data */
	detab_function(TABSTOP);

	return (0);
}
