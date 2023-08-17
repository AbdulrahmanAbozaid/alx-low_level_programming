#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * main - Entry point
 * @argc: afsdg
 * @argv: asdsf
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	char *c = (char *)main;
	int p;

	if (argc != 2)
		printf("Error\n"), exit(1);
	p = atoi(argv[1]);
	if (b < 0)
		printf("Error\n"), exit(2);

	while (p--)
		printf("%02hhx%s", *c++, p ? " " : "\n");
	return (0);
}
