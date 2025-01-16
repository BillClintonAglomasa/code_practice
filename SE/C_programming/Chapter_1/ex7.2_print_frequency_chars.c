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
	/** Declaration of variables */
	int c, i, j;

	/** Initialize variables */
	int freq[CHAR_NUM] = {0};

	/** Loop to check for characters */
	while ((c = getchar()) != EOF)
		{
			if (c >= 0 && c <= CHAR_NUM)
				++freq[c];
		}

	/** Printing frequency of unique characters */
	printf("Frequency of unique characters from input\n");

	for (i = 0; i < CHAR_NUM; ++i)
	{
		if (freq[i] > 0)
		{
			if (i >= 32 && i < 128)
				printf("The character %c occurs: ", i);
			else
				printf("The special character 0x%02X occurs: ", i);

			for (j = 0; j < freq[i]; ++j)
				putchar('*');
			putchar('\n');
		}
	}

	return (0);
}
