#include <stdio.h>

/** Function prototype */
int a_isdigit(int c);
int a_htoi(const char s[]);

/**
 * main - Entry to program
 *
 * Return: Always 0
 */

int main(void)
{
	/** Declare and initialize variables */
	char hex1[] = "0x2f";
	char hex2[] = "0X3F";
	char hex3[] = "4F";


	/** Printing the decimal equivalent of the hexadecimal */
	printf("Decimal for hex1 is %d", a_htoi(hex1));
	printf("Decimal for hex2 is %d", a_htoi(hex2));
	printf("Decimal for hex3 is %d", a_htoi(hex3));

	return (0);
}
