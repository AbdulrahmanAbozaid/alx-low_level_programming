#include "main.h"

/**
 * flip_bits - gdgds
 * @n: fsgsd
 * @m: fgsdgs
 *
 * Return: fafaf
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int num = n ^ m;
	unsigned int ctr = 0;

	while (num)
	{
		if (num & 1ul)
			ctr++;
		num >>= 1;
	}
	return (ctr);
}
