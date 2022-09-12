#include <stdio.h>

/**
 *
 * main- prints the size of characters
 *
 * Return: Always 0
 */

int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("size of a char: %d bytes\n", sizeof(a));
	printf("size of an int: %d bytes\n", sizeof(b));
	printf("size of a long int: %d bytes\n",sizeof(c));
	printf("size of a long long int: %d bytes\n", sizeof(d));
	printf("size of a float: %d bytes\n", sizeof(e));

	return(0);
}

