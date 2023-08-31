#include "main.h"

/**
 * set_bit - fsgs
 * @n: fsgsgs
 * @index: fsdfs
 *
 * Return: gsgs
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return (!!(*n |= 1L << index));
}
