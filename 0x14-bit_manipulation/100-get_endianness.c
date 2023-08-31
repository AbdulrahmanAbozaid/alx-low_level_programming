#include "main.h"

/**
 * get_endianness - fafas
 *
 * Return: feg
 */

int get_endianness(void)
{
	unsigned long int no = 1;

	return (*(char *)&no);
}
