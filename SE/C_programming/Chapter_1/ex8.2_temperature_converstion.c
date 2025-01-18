#include <stdio.h>

#define CHAR_NUM 256

/**
 * fahrtocel - A function that converts temperature in fahrenheit to celsius
 *
 * @fahr: Temperature in fahrenheit
 *
 * Description: This function takes a float of the temperature in fahrenheit,
 *              converts it to degree celsius and returns it as a float.
 */

float fahrtocel(float fahr);

int main(void)
{
	return (0);
}

float fahrtocel(float fahr)
{
	/** Declaration of variable */
	float c;

	/** Temperature conversion */
	c = (5.0 * (fahr - 32.0)) / 9.0;

	return (c);
}
