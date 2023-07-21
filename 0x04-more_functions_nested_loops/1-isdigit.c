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
