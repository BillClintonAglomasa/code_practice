#include <stdio.h>

/**
 * a_bitcount - A function that counts the number of bits set to 1 in x
 *
 * @x: An unsigned integer whose bit is to be counted
 *
 * Return: An integer of the number of bits set to 1
 */

int bitcount(unsigned int x)
{
	/** Declaration of variables */
	int b;

	for (b = 0; x != 0; x >>= 1)
	{
		if (x & 1)
			b++;
	}

	return b;
}
