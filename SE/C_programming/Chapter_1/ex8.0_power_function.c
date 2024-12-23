#include <stdio.h>

/**
 * main - Entry of function
 *
 * Return: Always 0
 *
 * Description: A power function to help in mathematical calculations
 */

int power(int m, int n);

int main(void)
{
	/** Declaration of variables */
	int i;

	/** Loop through a range to test the power function */
	for (i = 0; i < 10; ++i)
		printf("%d %d %d\n", i, power(2, i), power(-3, i));

	return (0);
}
