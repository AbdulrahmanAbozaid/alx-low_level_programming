#include <stdio.h>
#include "main.h"

/**
 * isAllowed - gsdeg
 * @n: gwes
 * Return: gsdg
 */

int isAllowed(int n)
{
	return (n >= 32 && n <= 126);
}

/**
 * printHex - gsgrs
 * @b: gewsgft
 * @start: tgeswt
 * @end: greyerw
 * Return: herher
 */

void printHex(char *b, int start, int end)
{
	int i = 0;

	while (i < 10)
	{
		if (i < end)
			printf("%02x", *(b + start + i));
		else
			printf("\n");
		if (i % 2)
			printf(" ");
		i++;
	}
}

/**
 * printASCII - gdsgt
 * @b: gewghew
 * @start: gsgh
 * @end: tews
 * Return: gewrg
 */

void printASCII(char *b, int start, int end)
{
	int ch, i = 0;

	while (i < end)
	{
		ch = *(b + start + i);
		if (!isAllowed(ch))
			ch = 46;
		printf("%c", ch);
		i++;
	}
}
/**
 * print_buffer - hesahgdgt
 * @b: gesrgr
 * @size: ger
 *
 * Return: geredg
 */

void print_buffer(char *b, int size)
{
	int start, end;

	if (size > 0)
	{
		for (start = 0; start < size; start += 10)
		{
			end = (size - start < 10) ? size - start : 10;
			printf("%08x: ", start);
			printHex(b, start, endl);
			printASCII(b, start, end);
			printf("\n");
		}
	}
	else
		printf("\n");
}
