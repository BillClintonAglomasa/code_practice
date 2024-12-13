#include <stdio.h>

/**
 * main - Entry of program
 *
 * Return: Always return (0)
 *
 * Description: A program that converts fahrenheit to celsius
 */

int main(void)
{
	/** Assigning variables to their types */
	float fahr, celsius;
	int lower, step, upper;

	/** Initialize variables */
	lower = 0;
	upper = 300;
	step = 20;

	fahr = 0;

	/** Printing header */
	printf("%s %s\n", "Celsius", "Fahrenheit");

	while (fahr <= upper)
	{
		celsius = (5.0/9.0) * (fahr - 32);
		printf("%3.0f %10.2f\n", celsius, fahr);

		fahr = fahr + step;
	}

	return (0);
}
