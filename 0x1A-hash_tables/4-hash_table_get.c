#include "hash_tables.h"

/**
 * hash_table_get - fafafas
 * @ht: fasfas
 * @key: fafas
 * Return: fasfasf
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *tmp;

	if (!ht || !key || strlen(key) == 0 ||
			ht->size == 0 || ht->array == NULL)
		return (NULL);
	idx = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[idx];
	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);
		tmp = tmp->next;
	}
	return (NULL);
}
