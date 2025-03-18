#include <stdio.h>

/** Prototype declaration */
void a_squeeze_1(char a1[], char a2[]);

/**
 * main - Entry to program
 *
 * Return: Always 0
 */

int main(void)
{
	/** Declaration and initialization of arrays */
	char j1[] = "This is Bill Clinton";
	char j2[] = "Is he really Bill Clinton";


	/** Before modification */
	printf("\n%s\n", j1);
	printf("%s\n", j2);


	a_squeeze_1(j1, j2);


	/** After modification */
	printf("%s\n", j1);
	printf("%s\n", j2);

	return (0);
}
