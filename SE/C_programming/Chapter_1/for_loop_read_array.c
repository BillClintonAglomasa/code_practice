#include <stdio.h>

/**
 * main -  Entry to program
 *
 * Return: Always 0
 */

int main(void)
{
	/** Declaration of variables */
	int c, i;
	int lim;
	char ch[100] = {0};

	/** Initializes variables */
	i = 0;
	lim = 100;

	/** A for loop to store input */
	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; i++)
		ch[i] = c;
	ch[i] = '\0';

	printf("The final count is %d", i);

	/** Rewritting the for loop without && or ||*/
	for (i = 0; i < lim - 1; i++)
	{
		c = getchar();

		if (c == EOF)
			break;
		if (c == '\n')
			break;
		ch[i] = c;}
	ch[i] = '\0';

	printf("This loop also gives the i value to be %d: ", i);


	return (0);
}
