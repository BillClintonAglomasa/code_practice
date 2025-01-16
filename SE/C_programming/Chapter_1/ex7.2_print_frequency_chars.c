#include <stdio.h>

/** Character length */
#define CHAR_NUM 256

/**
 * main - Entry to program
 *
 * Return: Always 0
 *
 * Description: A program that prints the frequency of a character
 */

int main(void)
{
	/** Declare variables */
	int c;

	/** Initialize variables */
	char freq[CHAR_NUM] = {0};

	/** Check character and run if it is not EOF */
	while ((c = getchar()) != EOF)
		{
			if (c >= 0 && c <= CHAR_NUM)
				++freq[c];
		}

	/** Printing frequency of unique characters */
	return (0);
}
