#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	long int a = 1;
	long int b = 2;
	long int c = a + b;
	long int ctr = 0;

	printf("%ld, %ld, ", a, b);
	ctr += 2;
	for (; ctr < 50; ctr++)
	{
		printf("%ld, ", c);
		a = b;
		b = c;
		c = a + b;
	}
	printf("%ld\n", c);

	return (0);
}
