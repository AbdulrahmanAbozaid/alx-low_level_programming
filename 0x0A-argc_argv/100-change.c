#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: gesg
 * @argv: gesdgs
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int n, m = 0;

	if (argc != 2)
		return (printf("Error\n"), 1);
	n = atoi(argv[1]);

	while (n > 0)
	{
		if (n >= 25)
		{
			m += (n / 25);
			n %= 25;
		}
		else if (n >= 10)
		{
			m += (n / 10);
			n %= 10;
		}
		else if (n >= 5)
		{
			m += (n / 5);
			n %= 5;
		}
		else if (n >= 2)
		{
			m += (n / 2);
			n %= 2;
		}
		else if (n >= 1)
		{
			m += n;
			n %= 1;
		}
	}

	printf("%d", m);
	if (n < 0)
		printf("\n");
	return (0);
}
