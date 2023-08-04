#include <stdio.h>
#include "main.h"

/**
 * _pow_recursion - gersgt
 * @x: gfewgtesw
 * @y: hyregres
 *
 * Return: grredgrd
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
