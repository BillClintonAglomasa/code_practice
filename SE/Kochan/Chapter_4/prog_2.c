#include <stdio.h>

/**
 * Main - Entry to program
 *
 * Return: Always 0
 */

int main(void)
{
	int a = 100;
	int b = 2;
	int c = 25;
	int d = 4;
	int result;

	/** Subtraction */
	result = a - b;
	printf("a - b = %i\n", result);

	/** Multiplication */
	result = b * c;
	printf("b * c = %i\n", result);

	/** Division */
	result = a / c;
	printf(" a / c = %i\n", result);

	/** Precedence */
	result = a + b * c;
	printf("a + b + c = %i\n", result);

	printf("a * b + c * d = %i\n", a * b + c * d);

	return (0);
}
