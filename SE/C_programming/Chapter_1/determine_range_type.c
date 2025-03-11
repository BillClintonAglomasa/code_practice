#include <stdio.h>

/**
 * main - Entry to the program
 *
 * Return: Always 0
 */

int main(void)
{
	/** Declaration of variables */
	char a;
	unsigned char b;
	signed char c;
	int d;
	short int e;
	long int f;
	unsigned long int g;
	unsigned short int h;
	signed long int i;
	signed short int j;
	double k;

	/** Initialization of variables */

	printf("Size of char is %lu\n", sizeof(char));
	printf("Size of unsigned char is %lu\n", sizeof(unsigned char));
	printf("Size of signed char is %lu\n", sizeof(signed char));
	printf("Size of int %lu\n", sizeof(int));
	printf("Size of short int is %lu\n", sizeof(short int));
	printf("Size of long int is %lu\n", sizeof(long int));
	printf("Size of unsigned long int is %lu\n", sizeof(unsigned long int));
	printf("Size of unsigned short int is %lu\n", sizeof(unsigned short int));
	printf("Size of signed long int is %lu\n", sizeof(signed long int));
	printf("Size of signed short int is %lu\n", sizeof(signed short int));
	printf("Size of float %lu\n", sizeof(float));
	printf("Size of double %lu\n", sizeof(double));
	printf("Size of long double %lu\n", sizeof(long double));

	return (0);
}
