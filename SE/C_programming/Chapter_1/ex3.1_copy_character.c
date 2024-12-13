#include <stdio.h>

/**
 * main - Entry to program
 *
 * Return: Always return (0)
 *
 * Definiton: Proram to copy character and print it to screen
 */

int main(void)
{
/*Declare variables*/
	int c;

	while ((c = getchar()) != EOF)
		putchar(c);

	return (0);
}
