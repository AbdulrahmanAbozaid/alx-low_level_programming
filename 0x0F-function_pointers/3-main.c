#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Entry point
 * @argc: asg
 * @argv: fsfs
 *
 * Return: Always 0 (Success)
 */


int main(int argc, char *argv[])
{
	int (*pr)(int, int);
	int res;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	pr = (*get_op_func)(argv[2]);
	if (pr == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if (!atoi(argv[3]) && (argv[2][0] == '/' || argv[2][0] == '%'))
		printf("Error\n"), exit(100);

	res = (*pr)(atoi(argv[1]), atoi(argv[3]));

	printf("%d\n", res);
	return (0);
}
