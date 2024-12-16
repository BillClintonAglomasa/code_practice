#include <stdio.h>

/**
 * main - Entry to program
 *
 * Return: Always return (0)
 *
 * Definition: A program that count blanks, ie '\n', '\t' or ' '
 */

int main(void)
{
	/** Declaration of variables */
	int c, n1, t1, b1;

	/** Initialize variables */
	n1 = t1 = b1 = 0;

	/** Read characters from input */
	while ((c = getchar()) != EOF)
	{
		if (c == '\n')
			++n1;

		if (c == '\t')
			++t1;

		if (c == ' ')
			++b1;
	}

	/** Print the results */
	printf("\nThis is a count of newline, tabs and blanks.\n");
	printf("Newline number: %d\tTab number: %d\tBlank number: %d", n1, t1, b1);

	return (0);
}
