#include "hash_tables.h"

/**
 * hash_table_create - create hsh
 * @size: rasfa
 *
 * Return: hash_table_t
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *htble;

	htble = malloc(sizeof(hash_table_t));
	if (htble == NULL)
		return (NULL);
	htble->size = size;
	htble->array = malloc(size * sizeof(hash_node_t *));
	if (htble->array == NULL)
	{
		free(htble);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		htble->array[i] = NULL;
	return (htble);
}
