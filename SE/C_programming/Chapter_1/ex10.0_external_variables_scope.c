#include <stdio.h>

#define MAXLINE 1000

int max;
char line[MAXLINE];
char longest[MAXLINE];

int my_getline(void);
void copy(void);

int main(void)
{
	int len;
	extern int max;
	extern char longest[];

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
