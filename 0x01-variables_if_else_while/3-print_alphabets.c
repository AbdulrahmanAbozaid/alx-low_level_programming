#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c = 'a';
	char c1 = 'A';

	while (c <= 'z')
	{
		putchar(c++);
	}

	while (c1 <= 'Z')
	{
		putchar(c1++);
	}

	putchar('\n');

	return (0);
}
