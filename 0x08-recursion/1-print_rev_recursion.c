#include <stdio.h>
#include "main.h"

/**
 * _print_rev_recursion - greyert
 * @s: fgesdgfsd
 *
 * Return: grghsdfghsfd
 */

void _print_rev_recursion(char *s)
{
	if (*s > '\0')
	{
		_print_rev_recursion(s++);
		_putchar(*s);
	}
}
