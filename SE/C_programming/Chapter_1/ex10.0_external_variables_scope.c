#include <stdio.h>

/** Maximum number of characters */
#define MAXLINE 1000

/** Declaration of external variables */
int max;
char line[MAXLINE];
char longest[MAXLINE];

/** Function prototype */
int my_getline(void);
void copy(void);

int main(void)
{
	/** Declaration of variables */
	int len;
	extern int max;
	extern char longest[];

	/** Initialization */
	max = 0;

	while ((len = my_getline()) > 0)
		if (len > max)
		{
			max = len;
			copy();
		}

	if (max > 0)
		printf("%s", longest);
	return 0;
}
