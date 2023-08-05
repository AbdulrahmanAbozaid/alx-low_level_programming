#include <stdio.h>
/**
 * main - Entry point
 * @argc: gesg
 * @argv: gesdgs
 * Return: Always 0 (Success)
 */

int main(int argc, char const *argv[])
{
	int sum;

	if (argc == 3)
	{
		sum = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", sum);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
