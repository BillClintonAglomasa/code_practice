#include <stdio.h>

/**
 * power - Computes the power of base raised to an exponent
 * @m: The base number
 * @n: The exponent
 *
 * Return: The computed value
 */

int power(int m, int n)
{
	/** Declaration of variables */
	int i, p;

	/** Initialize variable */
	p = 1;

	/** Loop to perform the calculation */
	for (i = 0; i < n; ++i)
		p *= m;

	return (p);
}

/**
 * main - Entry of function
 *
 * Return: Always 0
 *
 * Description: A program to test the power function
 */

int main(void)
{
	/** Declaration of variables */
	int i;

	/** Loop through a range to test the power function */
	for (i = 0; i < 10; ++i)
		printf("%d %d %d\n", i, power(2, i), power(-3, i));

	return (0);
}
