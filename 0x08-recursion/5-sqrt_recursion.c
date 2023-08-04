#include <stdio.h>
#include "main.h"

/**
 * square - gersgsd
 * @n: geg
 * @val: fgewst
 * Return: ghergr
 */

int square(int n, int val)
{
	if (val * val == n)
		return (val);
	else if (val * val < n)
		return (square(n, val + 1));
	return (-1);
}


/**
 * _sqrt_recursion - gtrestgre
 * @n: tgewtgew
 *
 * Return: gergtergt
 */

int _sqrt_recursion(int n)
{
	return (square(n, 1));
}
