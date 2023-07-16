#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: main fn to go
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	int ld = n % 10;

	if (ld > 5)
		printf("Last digit of %d is %d and is greater than 5\n");
	else if (ld == 0)
		printf("Last digit of %d is %d and is 0\n");
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n");

	return (0);
}
