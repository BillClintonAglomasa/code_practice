#include <stdio.h>

/**
 * main - Entry to program
 *
 * Return: Nothing
 *
 * Description: A program that uses entab_function to replace two or more blank
 *              spaces with a tab.
 */

int main(void)
{
	/** Declare variables */
	int spaces;

	/** Instantiate variables */
	spaces = 4;

	entab_function(spaces);
	return (0);
}
