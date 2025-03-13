#include <stdio.h>

/** Prototype declaration */
int a_rand(void);
void a_srand(unsigned int b);

/**
 * main - Entry to program
 *
 * Return: Always 0
 */

int main(void)
{
	/** Declaration of variables */
	int c;

	/** Initialization of variables */
	c = 43;

	a_srand(c);

	printf("\nThe seed 43 produces a random value of : %d\n", a_rand());

	return (0);
}
