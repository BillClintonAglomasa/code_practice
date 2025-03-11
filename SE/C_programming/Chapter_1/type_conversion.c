#include <stdio.h>

/**
 * main - Entry to program
 *
 * Return: Always 0
 */

int main(void)
{
	/** Declaration of variables */
	double a;
	int b;
	double c;

	/** Initialization of variables */
	a = 23.45;
	b = 4;

	/** Explicit conversion to int */
	c = (double) (a/b);

	printf("\n %f\n", c);

	c = (a/b);
	printf("\n %f\n", c);

	return (0);
}
