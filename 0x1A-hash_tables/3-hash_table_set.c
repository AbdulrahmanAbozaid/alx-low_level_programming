#include "hash_tables.h"

/**
 * make_hash_node - fafasf
 * @key: asfa
 * @value: afsa
 *
 * Return: fasfs
 */

hash_node_t *make_hash_node(const char *key, const char *value)
{
	hash_node_t *node;

	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (NULL);
	node->key = strdup(key);
	if (node->key == NULL)
	{
		free(node);
		return (NULL);
	}
	node->value = strdup(value);
	if (node->value == NULL)
	{
		free(node->key);
		free(node);
		return (NULL);
	}
	node->next = NULL;
	return (node);
}



/**
 * hash_table_set - dwafasfasf
 * @ht: fasfasf
 * @key: fafasfas
 * @value: fafasf
 *
 * Return: fsaffasf
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *node, *tmp;
	char *nv;

	if (!ht || ht->array == NULL || ht->size == 0 ||
			!key || !value || strlen(key) == 0)
		return (0);
	idx = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[idx];
	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			nv = strdup(value);
			if (!nv)
				return (0);
			free(tmp->value);
			tmp->value = nv;
			return (1);
		}
		tmp = tmp->next;
	}
	node = make_hash_node(key, value);
	if (!node)
		return (0);
	node->next = ht->array[idx];
	ht->array[idx] = node;
	return (1);

}
