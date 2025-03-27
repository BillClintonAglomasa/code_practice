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
	char q1[] = "This is Bill Clinton";
	char q2[] = "Is he really Bill Clinton?";
	char q3[] = "Mmmm";

	/** Printing strings */
	printf("%s\n", q1);
	printf("%s\n", q2);
	printf("%s\n", q3);

	i = a_any(q1, q2);
	j = a_any(q2, q3);

	/** Print values after function call */
	putchar('\n');

	printf("%d\n", i);
	printf("%d\n", j);

	return (0);
}
