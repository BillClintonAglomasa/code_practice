#include <stdio.h>

/** Prototype declaration */
void a_squeeze(char s[], int c);

/**
 * main - Entry to program
 *
 * Return: Always 0
 */

int main(void)
{
	/** Declaration of variables */
	int i, j, c;
	char a[] = "clinton cocoyam";

	/** Initialization of variables */
	i = j = 0;
	c = 'c';

	/** Before modification of array */
	putchar('\n');

	while (a[i] != '\0')
	{
		printf("%c", a[i]);
		i++;
	}

	/** Modification of array */
	a_squeeze(a, c);

	/** After modification of array */
	putchar('\n');
	while (a[j] != '\0')
	{
		printf("%c", a[j]);
		j++;
	}
	putchar('\n');

	return (0);
}
