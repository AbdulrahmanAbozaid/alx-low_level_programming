#include <stdio.h>
#include "main.h"

/**
 * _abs - get the abs of n
 * @n: number
 *
 * Return: absolute val
 */

int _abs(int n)
{
	if (n < 0)
		return (-1 * n);

	return (n);
}
