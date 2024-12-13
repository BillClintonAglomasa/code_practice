#include <stdio.h>

/**
 * main - Entry of program
 *
 * Return: Always return (0)
 *
 * Description: A program that converts fahrenheit to celcius
 */

int main(void)
{
	/** Declare variables */
	float fahr, celsius;
	int lower, upper, step;

	/** Set values for variables */
	lower = 0;
	upper = 300;
	step = 20;

	fahr = 0;

	while (fahr <= upper)
	{
		celsius = (5.0/9.0) * (fahr - 32);
		printf("%3.2f %6.2f\n", fahr, celsius);
		fahr = fahr + step;
	}

	return (0);
}
