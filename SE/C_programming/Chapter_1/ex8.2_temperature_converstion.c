#include <stdio.h>

/** Function prototype declaration */
float fahrtocel(float fahr);

/**
 * main - Entry to program
 *
 * Return: Always 0
 *
 * Description: A program that uses the fahrtocel function to convert
 *              temperature in fahrenheit to celsius and then prints it
 *              to output with decimal placing.
 */

int main(void)
{
	/** Declaration of variables */
	int i;
	float c;

	c = fahrtocel(23);
	printf("%.2f\n", c);
	return (0);
}

/**
 * fahrtocel - A function that converts temperature in fahrenheit to celsius
 *
 * @fahr: Temperature in fahrenheit
 *
 * Description: This function takes a float of the temperature in fahrenheit,
 *              converts it to degree celsius and returns it as a float.
 */

float fahrtocel(float fahr)
{
	/** Declaration of variable */
	float cels;

	/** Temperature conversion */
	cels = (5.0 * (fahr - 32.0)) / 9.0;

	return (cels);
}
