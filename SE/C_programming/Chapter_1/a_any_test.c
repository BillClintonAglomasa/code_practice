#include <stdio.h>

/** Prototype declaration */
int a_any(char a1[], char a2[]);

/**
 * main - Entry to program
 *
 * Return: Always 0
 */

int main(void)
{
	/** Declaration of variables */
	int i, j;

	/** Initialization of arrays */
	q1[] = "This is Bill Clinton";
	q2[] = "Is he really Bill Clinton?";
	q3[] = "Mmmm";

	/** Printing strings */
	printf("%s", q1);
	printf("%s", q2);
	printf("%s", q3);

	i = a_any(q1, q2);
	j = a_any(q2, q3);

	/** Print values after function call */
	putchar('\n');

	printf("%d", i);
	printf("%d", j);

	return (0);
}
