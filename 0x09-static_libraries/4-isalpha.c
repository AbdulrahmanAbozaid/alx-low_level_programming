#include <stdio.h>
#include "main.h"

/**
 * _isalpha - checks c is alpha
 * @c: character
 *
 * Return: 0 | 1`
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);

	return (0);
}
