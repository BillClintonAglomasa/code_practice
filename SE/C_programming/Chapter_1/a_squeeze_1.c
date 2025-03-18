#include <stdio.h>

/**
 * a_squeeze_1 - A function that deletes each character in an array that matches
 *               any character in another array.
 *
 * @s1: A string array
 * @s2: A string array
 *
 * Return: Nothing
 */

void a_squeeze_1(char s1[], char s2[])
{
	/** Declaration of variables */
	int i, j;

	/** Initialization of variables */
	i = j = 0;

	while (s1[i] != '\0')
	{
		i++;

		if (s1[i] != s2[j])
			j++;

		s1[i] = '\0';
	}
}
