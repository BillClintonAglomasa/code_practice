#include <stdio.h>

/**
 * main - Entry to program
 *
 * Return: Always return (0)
 *
 * Definition: A program that counts the number of characters
 */

int main(void)
{
	/**Declare variables*/
	long nc;

	while (getchar() != EOF)
		++nc;
	printf("%ld\n", nc);

	return (0);
}
