#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - gsertgers
 * @b: gesgs
 * Return: gsgsdgdf
 */

void *malloc_checked(unsigned int b)
{
	void *ad = malloc(b);

	if (!ad)
		exit(98);

	return (ad);
}
