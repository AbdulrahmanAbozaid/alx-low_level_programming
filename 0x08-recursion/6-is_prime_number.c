#include <stdio.h>
#include "main.h"

/**
 * check - gergt
 * @n: gesdwg
 * @val: gesge
 * Return: gesdgesd
 */

int check(int n, int val)
{
	if (val * val <= n)
	{
		if (n % val == 0)
			return (0);
		else
			return (check(n, val + 1));
	}

	return (0);
}

/**
 * is_prime_number - grest
 * @n: fdsegtds
 *
 * Return: gdshgsd
 */

int is_prime_number(int n)
{
	return (check(n, 2));
}
