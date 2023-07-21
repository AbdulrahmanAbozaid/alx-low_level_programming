#include <stdio.h>
#include "main.h"

/**
 * _isupper - is upper of c
 * @c: char
 *
 * Return: integer
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}

	return (0);
}
