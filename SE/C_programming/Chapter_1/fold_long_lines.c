#include <stdio.h>

/** Maximum number of columns allowed on an input line */
#define MAX_COUNT 20

/** Prototype declaration */
void fold_long_lines(int max_count);

/**
 * main - Entry to program
 *
 * Return: Nothing
 *
 * Description: A program that breaks a an input line into two or more if an
 *              nth column is exceeded.
 */

int main(void)
{
	fold_long_lines(MAX_COUNT);

	return (0);
}
