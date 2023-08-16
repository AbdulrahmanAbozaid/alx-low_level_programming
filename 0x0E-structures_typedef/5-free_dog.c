#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - ggdsg
 * @d: fasfs
 *
 * Return: ggdsgsg
 */

void free_dog(dog_t *d)
{
	free(d->name);
	free(d->age);
	free(d->owner);

	free(d);
}
