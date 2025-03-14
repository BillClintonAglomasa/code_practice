#include <stdio.h>

/** Function prototype */
void a_strcat(char a[], char b[]);

/**
 * main - Entry of program
 *
 * Return: Always 0
 */

int main(void)
{
	/** Declaration and initialization */
	int i = 0;

	char c[50] = "Bill Clinton Aglomasa";
	char d[] = " is my name.";

	a_strcat(c, d);

	putchar('\n');

	while (c[i] != '\0')
	{
		printf("%c", c[i]);
		i++;
	}

	putchar('\n');

	return (0);
}
