#include <stdio.h>

#define CHAR_NUM 256

/** Function prototype declaration */
float fahrtocel(float fahr);

int main(void)
{
	/** Declaration of variables */
	int a;
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
