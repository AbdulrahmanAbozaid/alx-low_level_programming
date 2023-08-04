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
	if (val * val > n && n > 1)
		return (1);
	else if (n % val == 0 || n <= 1)
		return (0);

	return (check(n, val + 1));
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
