#include <stdio.h>

/**
 * a_strcpy - A function that concatenates one string to another
 *
 * @s: An char array that another array will be concated to
 * @t: An char array to appended to an array
 *
 * Return: Nothing
 */

void a_strcpy(char s[], char t[])
{
	/** Declaration of variables */
	int i, j;

	/** Initialization of variables */
	i = j = 0;

	/** Knowing the end of string 1 */
	while (s[i] != '\0')
		i++;

	/** Appending one string to another */
	while ((s[i++] = t[j++]) != '\0')
		;
}
