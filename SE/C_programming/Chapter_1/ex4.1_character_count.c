#include <stdio.h>

/**
 * main - Entry to program
 *
 * Return: Always return (0)
 *
 * Definition: A program that uses a for loop to counts characters
 */

int main(void)
{
	/** Declare variable */
	long nc;

	for (nc = 0; getchar() != EOF; ++nc)
		;
	printf("\n%ld\n", nc);

	return (0);
}
