#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_dog - gsdgsdgs
 * @d: gsdgsdgs
 *
 * Return: sdgdsgdsg
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", (d->name) ? d->name : "(nil)");
		if (d->age)
			printf("Age: %f\n", d->age);
		else
			printf("Age: %s\n", "(nil)");
		printf("Name: %s\n", (d->owner) ? d->owner : "(nil)");
	}
}
