#include <stdio.h>
/**
 * main - Entry point of program
 *
 * Return: Always 0 (success)
 *
 * Description: A program that copies from input to output
 */

int main(void)
{
	/** Declare varaibles */
	int c;

	/** Set variables */
	c = getchar();

	while (c != EOF)
	{
		putchar(c);
		c = getchar();
	}
	return (0);
}
