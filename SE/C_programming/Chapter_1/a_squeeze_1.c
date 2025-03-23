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
	int i, j, k, found;

	/** Initialization of variables */
	i = j = k = found = 0;

	while (s1[i] != '\0')
	{
		j = 0;

		while (s2[j] != '\0')
		{
			if (s1[i] == s2[j])
			{
				found = 1;
				break;
			}
			j++;
		}

		if (!found)
		{
			s1[k++] = s1[i];
		}

		i++;

	}

	s1[k] = '\0';
}
