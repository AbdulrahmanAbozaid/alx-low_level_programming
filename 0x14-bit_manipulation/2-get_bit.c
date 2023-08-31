#include "main.h"

/**
 * get_bit - dsgsdg
 * @n: agsd
 * @index: fgs
 *
 * Return: gsgs
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	return (n & 1L << index);
}
