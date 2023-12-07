#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

/**
 * main - Splits a string
 *
 * Return - Always 0
 */

int main(void)
{
	char str[] = "This is Bill";
	char *cpy_str;
	char *token = NULL;
	char *delim = " \n";
	size_t n = strlen(str);

	token = strtok(str, delim);

	if (token == NULL)
	{
		perror("Unable to create token");
		exit(EXIT_FAILURE);
	}
	cpy_str = strndup(str, n);

	while (token)
	{
		printf("%s\n", token);
		token = strtok(NULL, delim);
	}
	exit(EXIT_SUCCESS);
}
