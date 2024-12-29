#include <sddio.h>

/**
 * power - Raise a base to the n-th powe
 *
 * @base: The base
 * @n: The exponent
 *
 * Return: Return the value of the computation
 */

int power(int base, int n)
{
	int p;

	for (p = 1; n > 0; --n)
		p = p * base;
	return p;
}
