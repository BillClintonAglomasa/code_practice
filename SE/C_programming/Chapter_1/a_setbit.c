#include <stdio.h>

/**
 * a_setbit - A function that sets the 3rd bit of a number
 *
 * @x: An integer who's 3 bit number is to be set
 *
 * Return: The binary value of the 3rd bit number of an integer
 */

int a_setbit(int x)
{
	return (x | (1 << 3));
}
