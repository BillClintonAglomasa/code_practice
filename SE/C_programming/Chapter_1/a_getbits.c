#include <stdio.h>

/**
 * a_getbits - A function that gets n bits from position p
 *
 * @x:
 * @p:
 * @n:
 *
 * Return
 */

unsigned a_getbits(unsigned x, int p, int n)
{
	return (x >> (p+1-n)) & ~(~0 << n);
}
