#include <stdio.h>

/**
 * strleng - A function that returns the length of a string
 *
 * @s: A string that will be looped through to count characters
 *
 * Return: An integer of the number of characters in the string
 */

int string(char s[])
 {
	 /** Declare variables */
	 int n;

	 /** Initialize variables */
	 n = 0;

	 while (s[n] != '\0')
		 ++n;

	 return (n);
 }
