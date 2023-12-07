#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * main - Prints "$" and reads from standard input
 *
 * Return: Always 0
 */

int main(void)
{
	char *read_input = NULL;
	size_t n = 0;
	ssize_t returned_input;

	printf("$ ");
	returned_input = getline(&read_input, &n, stdin);

	if (returned_input != -1)
	{
		printf("%s", read_input);
		free(read_input);
	}
	else

	{
		free(read_input);
		perror("Unable to read input");
		exit(EXIT_FAILURE);
	}

	exit(EXIT_SUCCESS);
}
