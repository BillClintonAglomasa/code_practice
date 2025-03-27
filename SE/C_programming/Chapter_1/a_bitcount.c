#include <stdio.h>

/**
 * a_bitcount - A function that counts 1 bits in x
 *
 * @x
 *
 * Return: An integer
 */

int bitcount(unsigned int x)
{
	/** Declaration of variables */
	int b;

	for (b = 0; x!= 0; x >>= 1)
	{
		if (x & 01)
			b++;
	}

	return b;
}
