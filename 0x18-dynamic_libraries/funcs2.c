#include <stdio.h>
#include "main.h"

/**
 * _isdigit - is digit c
 * @c: char
 *
 * Return: integer
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}

	return (0);
}

/**
 * _strlen - length
 * @s: string
 *
 * Return: integer
 */

int _strlen(char *s)
{
	int ctr = 0;
	char *c;

	for (c = s; *c != '\0'; c++)
	{
		ctr++;
	}

	return (ctr);
}


/**
 * _puts - gs
 * @str: sdtf
 *
 * Return: stges
 */

void _puts(char *str)
{
	char *c;

	for (c = str; *c != '\0'; c++)
	{
		printf("%c", *c);
	}

	putchar('\n');
}

/**
 * _strcpy - sedgtsde
 * @dest: dsg
 * @src: hdsfhgdsf
 *
 * Return: gsrgsr
 */

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}

/**
 * _atoi - sgegd
 * @s: edsgt
 *
 * Return: interger
 */

int _atoi(char *s)
{
	unsigned int num = 0;
	int sign = 1;

	do {
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
			num = (num * 10) + (*s  - '0');
		else if (num > 0)
			break;
	} while (*s++);

	return (num * sign);
}
