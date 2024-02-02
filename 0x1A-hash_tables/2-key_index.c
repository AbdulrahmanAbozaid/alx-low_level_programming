#include "hash_tables.h"


/**
 * key_index - fasfs
 * @key: fafas
 * @size: fasfasf
 * Return: fasfasf
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
