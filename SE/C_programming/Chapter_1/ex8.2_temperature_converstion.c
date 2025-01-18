#include <stdio.h>

/** Function prototype declaration */
float fahrtocel(float fahr);

/**
 * main - Entry to program
 *
 * Return: Always 0
 *
 * Description: A program that uses the fahrtocel function to convert
 *              temperature in fahrenheit (23 F) to celsius and then prints it
 *              to output with two decimal placing. This iteration is done 10x
 */

int main(void)
{
	/** Declaration of variables */
	int counter, fahrenheit;
	float celsius, fahrenheit;

	/** Initialize variables */
	fahrenheit = 23.0;
	counter = 0;

	/** Recomputes the value of celsius untill 10 iterations */
	while (counter < 10)
	{
		celsius = fahrtocel(fahrenheit);
		printf("%.2f\n", celsius);

		/** Increases counter and decreases fahrenheit */
		++counter;
		fahrenheit -= counter;
	}

	return (0);
}

/**
 * fahrtocel - A function that converts temperature in fahrenheit to celsius
 *
 * @fahr: Temperature in fahrenheit
 *
 * Return: Returns a temperatue value in celsius
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
