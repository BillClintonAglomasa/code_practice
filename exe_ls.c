#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main(int argc, char **argv)
{
	int wstatus;
	int i;
	int max_fork = 5;
	pid_t child_process;

	while (1)
	{
	printf("$ ");

	for (i = 0; i < max_fork; i++)
	{
		child_process = fork();

		if (child_process == -1)
		{
			perror("Error creating child process");
			exit(EXIT_FAILURE);
		}

		if (child_process == 0)
		{
			execve(argv[1], argv, NULL);
		}
		else
		{
			wait(&wstatus);
		}
	}
	}
	exit(EXIT_SUCCESS);
}
