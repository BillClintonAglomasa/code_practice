#include <stdio.h>

/** Prototype declaration */
int a_setbit(int a);

/**
 * main - Entry to the program
 *
 * Return: Always 0
 */

int main(void)
{
	/** Declaration of variables */
	int a, b;

	/** Initialization of variables */
	a = 10;

	/** Calling function */
	b = a_setbit(a);

	/** Printing value of b */
	putchar('\n');
	printf("The value of b is %d", b);

	return (0);
}
