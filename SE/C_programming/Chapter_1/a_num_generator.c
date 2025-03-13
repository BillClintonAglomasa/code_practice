#include <stdio.h>

/** Declaration and initialization of global variable */
unsigned long int next = 1;

/**
 * a_rand - A function that generates a random integer
 *
 * Return: Returns an unsigned integer
 */

int a_rand(void)
{
	next = next * 1103515245 + 12345;
	return ((unsigned int) (next / 65536) % 32768);
}

/**
 * a_srand - A function that provides a new value for next
 *
 * @seed: An integer that is passed to next
 *
 * Return: Nothing
 */

void a_srand(unsigned int seed)
{
	next = seed;
}
