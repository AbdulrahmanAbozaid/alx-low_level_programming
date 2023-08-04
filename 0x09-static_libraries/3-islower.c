#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 * _islower - checks for lower of c
 * @c: character
 *
 * Return: 0 or 1
 */

int _islower(int c)
{
	if (c >= 97)
		return (1);

	return (0);
}
