#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(void)
{
	char *argv[] = {"/bin/ls", "-l", "/home/vagrant/learnings/simple_shell", NULL};

	printf("This is Bill\n");

	if (execve(argv[0], argv, NULL) == -1)
	{
		perror("Error:");
		exit(EXIT_FAILURE);
	}

	printf("This is Bill aftermath");

	exit(EXIT_SUCCESS);
}
